#include "functions.h"
/*
 *  This function display(), uses a for loop to print all of the current index values inside the 2D array. Whilst printing the array, an if statement checks the value and adds one to the correct count (e.g. 1 = human , 0 = zombie, 2 = removed;
 */
void display() {
   long long x = 0, y = 0, i = 0, j = 0, zombies = 0, humans = 0, removed = 0;
   // printf("\nCurrent Block, Generations: %lld\n", gen);
   for (i = 0; i < rows; i++) {

      for (j = 0; j < columns; j++) {
         current[i][j] = temp[i][j]; //creates a seperate 2D array and fills it with the same values as current[][]
      }
   }
   for (x = 0; x < rows; x++) {
      for (y = 0; y < columns; y++) {
         printf("%lld ", current[x][y]);
         if (current[x][y] == 1) {
            humans++;

         } else if (current[x][y] == 0) {
            zombies++;
         } else {
            removed++;
         }

      }
      printf("\n");
   }
    //printf("Humans = %lld \n Zombies = %lld \n Removed = %lld", humans, zombies, removed);
   //printf("humans: %lld\nzombies: %lld\n removed: %lld", humans, zombies, removed);
   //gen++;
}
