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

int main(void) {
   columns = 1000;
   rows = 1000;
   int i = 0;
   current = (long long ** ) malloc(rows * sizeof(long long * ));
   temp = (long long ** ) malloc(rows * sizeof(long long * ));
   for (i = 0; i < columns; i++) {
      current[i] = (long long * ) malloc(rows * sizeof(long long));
      temp[i] = (long long * ) malloc(rows * sizeof(long long));

   }
   fillFirstGen();
   display();
   for(i=0; i <  100; i++){
   transisition();

   printf("\n");
   //printf("\nCurrent Block");
   display();
//    sleep(1);
   }
   // printf("\nTemp Block");
   //  show(Temp);
   printf("\n");
   for(i=0; i <  rows; i++){
     free(current[i];
     free(temp[i];
   }
   free(current);
   free(temp);
   return 0;
   // show(Current);
}
