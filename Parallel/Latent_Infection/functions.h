#ifndef MY_FUNCTIONS_H
#define MY_FUNCTIONS_H
#define COLUMNS 1000;
#define ROWS 1000;
#define SIZE 1000;
#include<stdio.h>
#include<stdlib.h>
long long gen; //generations = 0
long long rows;
long long **current;
long long **temp;
long long columns; // Declares columns size
long long thread_count;
long long size;

 

void display();
void *temptocurr(void *rank);
void *transisition (void *rank); 
void *fillFirstGen(void *rank);
long long count_Humans(long long int i,long long int j);
long long count_Zombies(long long int i,long long int j);


#endif
