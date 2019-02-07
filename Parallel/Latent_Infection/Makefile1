all: basetest

basetest: basemodel.o fill.c count.o display.o transistion.o temptocurr.o functions.h
	gcc -g -Wall basemodel.o fill.c count.o display.o transistion.o temptocurr.o functions.h -lpthread -o basetest 

basemodel.o: basemodel.c
	gcc -c -g basemodel.c
fill.o: fill.c 
	gcc -c -g fill.c
count.o: count.c
	gcc -c -g count.c
display.o: display.c 
	gcc -c -g display.c
transistion.o: transistion.c 
	gcc -c -g transistion.c  

temptocurr.o: temptocurr.c 
	gcc -c -g temptocurr.c  
clean:
	rm -rf *o basetest
