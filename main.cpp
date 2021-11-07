#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

void sizeofarray(){
    int i[10];
    double name[10];
    std::cout << '\n' << &i[0] << '\n' << &i[1] << '\n';
    std::cout << &name[0] << '\n' << &name[1];
}

void constValue(){
    const int luckNum = 8;
    //常量的值不能修改
    // luckNum++;
    int b = 3;

    int &a = b;
}

struct Pair{
    string name;
    double val;
};

vector<Pair> pairs;
 
double& value(const string&s){
    for(int i=0; i< pairs.size();i++){
        if(pairs[i].name ==s )
            return pairs[i].val;
    }
    Pair p = { s, 0};
    pairs.push_back(p);
    return pairs[pairs.size()-1].val;
}
int main(){
    // char s[] = "hello world is love!\n";
    // int i;
    // i = strlen(s);
    // std::cout << s << " length is " << i;
    // printf("first %c", *s);
    // sizeofarray();
    string buf;
    while(cin >> buf) value(buf)++;
    for(vector<Pair>::const_iterator p = pairs.begin();p!=pairs.end();p++){
        cout << p->name << ":" << p->val << "\n";
    }
   return 0;
}

