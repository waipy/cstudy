hello: main.o list.o
	gcc -o hello main.o list.o fact.o
main.o: main.c
	gcc -c main.c
list.o: list.h fact.c
	gcc -c list.c fact.c
argu: argu.c
	gcc argu.c -o argu
fahr: ./chapter1/fahr.c
	gcc ./chapter1/fahr.c -o fahr
clean:
	rm *.o fahr argu hello