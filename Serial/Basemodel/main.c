#include <stdio.h> 
#include <stdlib.h>

long long gen = 0; //generations = 0
long long rows;
long long ** current;
long long ** temp;
long long columns; // Declares columns size
void display();
void fillFirstGen();
void transisition();

int main() {
    columns = 1000;
    rows = 1000;
   int i = 0;
   current = malloc(sizeof(long long * ) * (rows+1));
   temp = malloc(sizeof(long long * ) * (rows+1));
   for (i = 0; i < rows; i++) {
      current[i] = malloc(sizeof(long long) * columns);
      temp[i] =  malloc(sizeof(long long) * columns);
   }
   fillFirstGen();
   for (i = 0 ; i < 100; i++){
      
       transisition();
       printf("\n");
       //sleep(1);
       display();
   }
    for (i = 0; i < rows + 1; i++) {
         free(current[i]);
         free(temp[i]);
    }
   free(current);
   free(temp);
   return 0;
}
