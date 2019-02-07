#include <stdio.h> 
#include <stdlib.h> 
#include <pthread.h> 
#include "functions.h"

const int MAX_THREADS = 10; 
long long gen = 0; 
long long rows;
long long **current;
long long **temp;
long long columns;

int main(void) {
   int i = 0;
   long thread;
   size = 1000;
  // thread_count = 1;
  // thread_count = 2;
  // thread_count = 4;
  // thread_count = 5;
  // thread_count = 10;
   thread_count = 20;
   pthread_t * thread_handles;
   pthread_t * thread_trans;
   pthread_t * thread_temptocurr;
   columns = 1000;
   rows = 1000;
   //from here
   current = malloc((rows) * sizeof(long long *)); // Allocating memory to 2D array current; 
   temp = malloc((columns) * sizeof(long long *)); // Allocating memory to 2D array temp;

   for (i = 0; i < columns; i++) {
      current[i] = malloc((rows) * sizeof(long long));
      temp[i] = malloc((columns) * sizeof(long long));
   }
   //to here

   thread_handles = malloc(thread_count * (sizeof(pthread_t)));
   thread_temptocurr = malloc(thread_count *( sizeof(pthread_t)));
   thread_trans = malloc(thread_count *( sizeof(pthread_t)));
   //free(thread_handles);

   //Create the child thread and pass the child thread rank "thread" 
   // to the child_hello() function
   for (thread = 0; thread < thread_count; thread++)
      pthread_create( & thread_handles[thread], NULL, fillFirstGen, (void * ) thread);

   for (thread = 0; thread < thread_count; thread++)
      pthread_join(thread_handles[thread], NULL);
 
   display();

   for (i = 0 ; i < 100; i++){
   for (thread = 0; thread < thread_count; thread++)
      pthread_create( & thread_trans[thread], NULL, transisition, (void * ) thread);
    for (thread = 0; thread < thread_count; thread++)
         pthread_join(thread_trans[thread], NULL);
         
         
    for (thread = 0; thread < thread_count; thread++)
          pthread_create( & thread_temptocurr[thread], NULL, temptocurr, (void * ) thread);
     for (thread = 0; thread < thread_count; thread++)
     pthread_join(thread_temptocurr[thread], NULL);
         
       display();
       //free(thread_temptocurr);
      //free(thread_trans);
   }
   
//}
      
     
//   for (thread = 0; thread < thread_count; thread++)
  //    pthread_create( & thread_handles[thread], NULL, temptocurr, (void * ) thread);

//   for (thread = 0; thread < thread_count; thread++)
  //    pthread_join(thread_handles[thread], NULL);
    
  // for (i = 0; i < 3; i++){
 /*   for (thread = 0; thread < thread_count; thread++)
      pthread_create( & thread_handles[thread], NULL, transisition, (void * ) thread);

   for (thread = 0; thread < thread_count; thread++)
      pthread_join(thread_handles[thread], NULL);

   free(thread_handles);

   printf("\n");
   printf("\nCurrent Matrix\n");
   //printf("\nCurrent Block");
   for (thread = 0; thread < thread_count; thread++)
      pthread_create( & thread_handles[thread], NULL, temptocurr, (void * ) thread);

   for (thread = 0; thread < thread_count; thread++)
      pthread_join(thread_handles[thread], NULL);
    display();
   free(thread_handles);
  // }*/
   for( i = 0 ; i < rows; i++){
       free(current[i]);
       free(temp[i]);
}
   
   free(current);
   free(temp);
   // printf("\nTemp Block");
   //  show(Temp);
   printf("\n");
   
}
