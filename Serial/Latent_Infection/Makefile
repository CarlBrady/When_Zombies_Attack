all: latent

latent: main.o fill.c count.o display.o transistion.o functions.h
	gcc main.o fill.c count.o display.o transistion.o functions.h -lm -o latent

main.o: main.c
	gcc -c main.c
fill.o: fill.c 
	gcc -c fill.c
count.o: count.c
	gcc -c count.c
display.o: display.c 
	gcc -c display.c
transistion.o: transistion.c 
	gcc -c transistion.c  
clean:
	rm -rf *o latent
