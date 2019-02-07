#ifndef MY_FUNCTIONS_H
#define MY_FUNCTIONS_H
#include<stdio.h>
#include<stdlib.h>
long long gen; //generations = 0
long long rows;
long long **current;
long long **temp;
long long columns; // Declares columns size
 


void display();
void transisition (); 
void fillFirstGen();
long long int count_Humans(long long int i,long long int j);
long long int count_Zombies(long long int i,long long int j);


#endif
