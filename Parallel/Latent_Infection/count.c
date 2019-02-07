#include"functions.h"

/*
 * This function count_Humans, counts the number of Human neighbours for a given index on the 2D array
 * 
 */
long long int count_Humans(long long int i,long long int j)
    {
    long long   humans = 0 , x = 0,y = 0;
    for (x = i-1; x <= i+1; x++) // for loop to get rows of neighbours 
    {
        for (y = j - 1; y <= j+1; y++) // for loop to get columns of neighbours
        {
            
            if(current[(x + rows) % rows][(y + columns) % columns] ==1) //the wrap around is set here using modulus
                humans++;
            if((x==i)&&(y==j)&&(current[i][j] ==1)) // if the index which you are trying to find its neighbours equals one , remove it from the count as it should not be counted as a neighbour.
                humans--;
        }
    
    } 
  //  printf("The amount of human neighbours for current[%lld][%lld]: %lld", i,j,humans);
    return humans;
}

long long int count_Zombies(long long int i,long long int j)
    {
    long long zombies = 0 , x = 0,y = 0;
    for (x = i-1; x <= i+1; x++) // for loop to get rows of neighbours
    {
        for (y = j - 1; y <= j+1; y++) // for loop to get columns of neighbours
        {
            if(current[(x + rows) % rows][(y + columns) % columns] ==0)//the wrap around is set here using modulus and if current = 0 then add 1 to the zombie count
                zombies++;
            if((x==i)&&(y==j)&&(current[i][j] ==0))// if the index which you are trying to find its neighbours equals 0 , remove it from the count as it should not be counted as a neighbour.
                zombies--;
         
        }
    
    } 
   // printf("The amount of zombie neighbours for current[%lld][%lld]: %lld", i,j,zombies);
    return zombies;
}
