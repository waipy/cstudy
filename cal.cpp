#include <string>
#include <iostream>
#include <map>
using namespace std;
double number_value;
std::string string_value;
std::map<std::string,double> table;

enum Token_value{
    NAME,
    NUMBER,
    END,
    PLUS = '+',
    MINUS = '-',
    MUL = '*',
    DIV = '/',
    PRINT = ';',
    ASSIGN = '=',
    LP = '(',
    RP = ')'
};

Token_value curr_tok = PRINT;
double expr(bool get);

int no_of_errors=0;
int error(const std::string& s){
    no_of_errors++;
    cerr << "error : " << s << "\n";
    return 1;
}

Token_value get_token(){
    char ch;
    do{
        if(!cin.get(ch)) return curr_tok = END;
    }while(ch!='\n' && isspace(ch));
    // cin >> ch;
    switch (ch)
    {
    case 0:
        return curr_tok = END;
    case '*':
    case '/':
    case '+':
    case '-':
    case '(':
    case ')':
    case '=':
        return curr_tok = Token_value(ch);
    case '0':case '1':case '2':case '3':case '4':
    case '5':case '6':case '7':case '8':case '9':case '.':
        cin.putback(ch);
        cin >> number_value;
        return curr_tok = NUMBER;
    case ';':
    case '\n':
        return curr_tok = PRINT;
    default:
        if(isalpha(ch)){
            string_value = ch;
            while(cin.get(ch) && isalnum(ch)) string_value.push_back(ch);
            cin.putback(ch);
            // cin >> string_value;
            return curr_tok = NAME;
        }
        error("bad Token");
        return curr_tok = PRINT;
    }
}
double prim(bool get){
    if(get) get_token();
    switch (curr_tok)
    {
    case NAME:
    {
        double& v = table[string_value];
        if(get_token() == ASSIGN) v = expr(true);
        return v;

    }
    case NUMBER:
    {
        double v = number_value;
        get_token();
        return v;
        break;
    }
    case MINUS:
        return -prim(true);
    case LP:
        {
            double e = expr(true);
            if(curr_tok!=RP) error(") except");
            get_token();
            return e;
        }
    default:
        return error("Primary except");
    }
    return 0;
}
double term(bool get){
    double left = prim(get);
    for(;;){
        switch (curr_tok)
        {
        case MUL:
            left *=prim(true);
            /* code */
            break;
        case DIV:
            if(double d = prim(true)){
                left /= d;
                break;
            }
            return error("divde by 0");
        default:
            return left;
        }
    }
    return left;
}
double expr(bool get){
    double left = term(get);
    for(;;){
        switch (curr_tok)
        {
        case PLUS:/* constant-expression */
            /* code */
            left += term(true);
            break;
        case MINUS:
            left -= term(true);
            break;
        default:
            return left;
        }
    }

}

int main(){
    table["pi"] = 3.1415926;
    table["e"] = 2.71828;
    while(cin){
        get_token();
        if(curr_tok == END){
            break;
        }
        if(curr_tok == PRINT){
            continue;
        }
        cout << expr(false) << '\n';
    }
    return no_of_errors;
}