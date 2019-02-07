#include <pthread.h>
#include"functions.h"/* 
 This function fillFirstGen, fills the 2D array with random values between 0 & 2
 */

/* 
 This function fillFirstGen, fills the 2D array with random values between 0 & 2
 */

void *fillFirstGen(void *rank) { 
            long long i=0,j=0, min = 0, max = 3; //Declarations of variables
            long my_rank = (long) rank; /*use long in case of 64 bit system */
            int local_mOvert = size/thread_count; //does division of m/t
            int my_first_row = my_rank*local_mOvert;// 
            int my_last_row = (my_rank+1) * local_mOvert - 1;
            
                  for(i = my_first_row; i <= my_last_row; i++){
                        for(j = 0;  j < columns; j ++){// for i is less than m/t-1, i++
               
                    //for j is less than the amount of m/t-1, y++
                
                    current[i][j] = min + (float) (rand() ) / ( (float) (RAND_MAX/(max-min)));
                    //fill current[i][j] with a random number between min and max
                }
            }
        for(i = my_first_row; i <= my_last_row; i++){
        for(j = 0;  j < columns; j ++){
               //for j is less than the amount of m/t-1, y++
                    temp[i][j] = current[i][j]; //creates a seperate 2D array and fills it with the same values as current[][]
                  // printf("%lld", current[i][j]); // prints the current 2D array to the screen
                }
              printf("\n");
            }

     /*       printf("\n\nTemp\n\n");
            
            for (i = 0; i < rows; i++){
    
                for (j = 0; j < columns; j++){
                printf("%lld", temp[i][j]);  // prints the temp 2D array to the screen
                }
            printf("\n");
            }
       */     
  return NULL;      
}
