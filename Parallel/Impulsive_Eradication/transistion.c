#include <pthread.h>
#include"functions.h"
void *transisition (void *rank) {
    long long x = 0,y = 0;
    long my_rank = (long) rank; /*use long in case of 64 bit system */
    int local_mOvert = size/thread_count; //does division of m/t
    int my_first_row = my_rank*local_mOvert;// 
    int my_last_row = (my_rank+1) * local_mOvert - 1;
    //get_Nhood(Temp,Current);
    
    for(x = my_first_row; x <= my_last_row; x++)
    {
        for (y = 0; y < columns; y++)
        {
           if ((current[x][y] == 1) && (count_Humans(x, y) < count_Zombies(x,y))) //if cell equals 1(human) and its human neighbours are less then its zombie neighbours
         {
            temp[x][y] = 3; //s=z, human turns into bitten
         }
         else if ((current[x][y] == 1) && (count_Humans(x, y) > 2)) //if cell equals 1(human) and its human neighbours are three or more
         {
            temp[x][y] = 1; //s=s human survives
         } 
         else if ((current[x][y] == 1) && (count_Humans(x, y) > count_Zombies(x,y))) //if a cell is a human(1) and its human neighbours are greater than the zombie neighbours
         {
            temp[x][y] = 4; //s=r Human dies of natural causes (removed)
         }
         else if ((current[x][y] == 0) && (count_Zombies(x, y) > count_Humans(x,y))) //if cell is zombie(0) and its zombie neighbours are greater than humans 
         {
            temp[x][y] = 5; //z=r bomb dropped and zombie is destroyed
         } 
         else if ((current[x][y] == 0) && (count_Zombies(x, y) < 3 && count_Humans(x,y) > 0)) // if a zombie(0) has 2 or less zombie neighbours and has more than 0 human neighbours
         {
            temp[x][y] = 0; //z=z zombie survives
         }
         else if ((current[x][y] == 0) && (count_Humans(x,y) >= count_Zombies(x,y))) // if a zombie(0) has an amount of human neighbours that are equal or greater than the neighbouring zombies
         {
            temp[x][y] = 2; //z=z zombie survives
         }
         else if (((current[x][y] == 2) && (count_Humans(x,y) > 1) && count_Humans< count_Zombies)) // if an empty cell has more than one human neighbour and humans are greater than zombie neighbours
         {
            temp[x][y] = 1; //r=s A Human is born
         }
         else if ((current[x][y] == 3) && (count_Zombies(x, y) > count_Humans(x,y))) // if a bitten has more zombie neighbours than human neighbours 
         {
            temp[x][y] = 0; //r=z A Zombie rises
         }
          else if ((current[x][y] == 4) && (count_Zombies(x, y) > count_Humans(x,y))) // if a dead human has more zombie neighbours than human neighbours
         {
            temp[x][y] = 0; //r=z A Zombie rises
         }
        }

    }
    

}  
