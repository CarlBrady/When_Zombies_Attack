#include"functions.h"
#include<pthread.h>
/*
 *  This function display(), uses a for loop to print all of the current index values inside the 2D array. Whilst printing the array, an if statement checks the value and adds one to the correct count (e.g. 1 = human , 0 = zombie, 2 = removed;
 */
void *temptocurr(void *rank)
{
    long my_rank = (long) rank; /*use long in case of 64 bit system */
    int local_mOvert = size/thread_count; //does division of m/t
    int my_first_row = my_rank*local_mOvert;// 
    int my_last_row = (my_rank+1) * local_mOvert - 1;
    long long i = 0, j = 0;
    for(i = my_first_row; i <= my_last_row; i++){
    
                for (j = 0; j < columns; j++){
                    current[i][j] = temp[i][j]; //creates a seperate 2D array and fills it with the same values as current[][]
                }
            }
    }
    
//printf("humans: %lld\nzombies: %lld\n removed: %lld", humans, zombies, removed);
//gen++;

