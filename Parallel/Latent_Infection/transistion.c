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
          if ((current[x][y] == 1) && (count_Humans(x, y) < count_Zombies(x,y))) //if cell equals 1(human) and its human neighbours are less than three
         {
            temp[x][y] = 3; //s=z, human turns into zombie
         }
         else if ((current[x][y] == 1) && (count_Humans(x, y) > 2)) //if cell equals 1(human_ and its neighbours are three or more
         {
            temp[x][y] = 1; //s=s human survives
         } 
         else if ((current[x][y] == 1) && (count_Humans(x, y) > count_Zombies(x,y))) //if a cell is a human(1) and its human neighbours are greater than or equal to 4
         {
            temp[x][y] = 4; //s=r Human dies of natural causes (removed)
         }
         else if ((current[x][y] == 0) && (count_Zombies(x, y) > 3) && (count_Humans(x, y) < 3)) //if cell is zombie(0) and its zombie neighbours are greater than or equal to 3 
         {
            temp[x][y] = 2; //z=r zombie becomes removed
         } 
         else if ((current[x][y] == 0) && (count_Zombies(x, y) < 3)) // if a zombie(0) has 2 or less zombie neighbours
         {
            temp[x][y] = 0; //z=z zombie survives
         }
         else if ((current[x][y] == 2) && (count_Humans(x,y) > 1) && (count_Humans(x,y) > count_Zombies(x,y) )) 
         {
            temp[x][y] = 1; //r=z
         }
         else if ((current[x][y] == 3) && (count_Zombies(x, y) > count_Humans(x,y))) // Needs to be fixed Predator Prey
         {
            temp[x][y] = 0; //r=z
         }
          else if ((current[x][y] == 4) && (count_Zombies(x, y) > count_Humans(x,y))) // Needs to be fixed Predator Prey
         {
            temp[x][y] = 0; //r=z
         }
        }

    }
    

}  
