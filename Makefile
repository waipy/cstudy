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
getchar: ./chapter1/getchar.c
	gcc ./chapter1/getchar.c -o getchar 
count: ./chapter1/count.c
	gcc ./chapter1/count.c -o count 
power: ./chapter1/power.c
	gcc ./chapter1/power.c -o power 
longest: ./chapter1/longest.c
	gcc ./chapter1/longest.c -o longest 
clean:
	rm *.o fahr argu hello