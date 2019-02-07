#include "functions.h"
void transisition() {
   long long x = 0, y = 0, i = 0, j = 0;
   //get_Nhood(Temp,Current);

   for (x = 0; x < rows; x++) {
      for (y = 0; y < columns; y++) {
           if ((current[x][y] == 1) && (count_Humans(x, y) < 3) && (count_Zombies(x, y) > 3)) //if cell equals 1(human) and its human neighbours are less than three
         {
            temp[x][y] = 0; //s=z, human turns into zombie
         } else if ((current[x][y] == 1) && (count_Humans(x, y) >= 3)) //if cell equals 1(human_ and its neighbours are three or more
         {
            temp[x][y] = 1; //s=s human survives
         } else if ((current[x][y] == 1) && (count_Humans(x, y) > 4)) //if a cell is a human(1) and its human neighbours are greater than four
         {
            current[x][y] = 2; //s=r Human dies of natural causes (removed)
         } else if ((current[x][y] == 0) && (count_Zombies(x, y) > 2) && (count_Humans(x, y) < 3)) //if cell is zombie(0) and its zombie neighbours are greater than 2 and human neighbours are less than 3
         {
            temp[x][y] = 2; //z=r zombie becomes removed
         } else if ((current[x][y] == 0) && (count_Zombies(x, y) < 3)) // if a zombie(0) has 2 or less zombie neighbours
         {
            current[x][y] = 0; //z=z zombie survives
         } else if ((current[x][y] == 2) && (count_Zombies(x, y) > count_Humans(x,y))) // if dead space has more zombie neighbours than human
         {
            temp[x][y] = 0; //r=z dead rises as zombie
         

        }
      }
   }
}
