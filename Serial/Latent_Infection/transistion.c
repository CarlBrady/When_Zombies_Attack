#include "functions.h"
void transisition() {
   long long x = 0, y = 0, i = 0, j = 0;
   //get_Nhood(Temp,Current);

   for (x = 0; x < rows; x++) {
      for (y = 0; y < columns; y++) {
         if ((current[x][y] == 1) && (count_Humans(x, y) < count_Zombies(x,y))) //if cell equals 1(human) and its human neighbours are less than zombie neighbours
         {
            temp[x][y] = 3; //s=z, human turns into bitten
         }
         else if ((current[x][y] == 1) && (count_Humans(x, y) > 2) && count_Humans(x,y) < 4) //if cell equals 1(human) and its neighbours are three or more
         {
            temp[x][y] = 1; //s=s human survives
         } 
         else if ((current[x][y] == 1) && (count_Humans(x, y) > 4)) //if a cell is a human(1) and its human neighbours are greater than 4
         {
            temp[x][y] = 4; //s=r Human dies of natural causes (removed)
         }
         else if ((current[x][y] == 0) && (count_Zombies(x, y) > 3) && (count_Humans(x, y) < 3)) //if cell is zombie(0) and its zombie neighbours are greater than 3 
         {
            temp[x][y] = 2; //z=r zombie becomes removed
         } 
         else if ((current[x][y] == 0) && (count_Zombies(x, y) < count_Humans(x,y))) // if a zombie(0) has more human neighbours than zombie neighbours
         {
            temp[x][y] = 0; //z=z zombie survives
         }
         else if ((current[x][y] == 2) && (count_Humans(x,y) > 1) && (count_Humans > count_Zombies))// if an empty cell(2) has more than one human neighbours and more human neighbours than zombie neighbours 
         {
            temp[x][y] = 1; //r=s empty cell becomes a human
         }
         else if ((current[x][y] == 3) && (count_Zombies(x, y) > count_Humans(x,y))) // if a bitten susceptible (3) has more zombie neighbours than human
         {
            temp[x][y] = 0; //s=z bitten becomes zombie
         }
          else if ((current[x][y] == 4) && (count_Zombies(x, y) > count_Humans(x,y))) // If a human that died of natural causes (4) has more zombie neighbours than human neighbours
         {
            temp[x][y] = 0; //dead human rises as zombie
         }

      }

   }

}
