#include <time.h> // counting from cpu clock
#include "functions.h"

/* 
 This function fillFirstGen, fills the 2D array with random values between 0 & 2
 */

void fillFirstGen() {
   long long i = 0, j = 0; //Declarations of variables
   float random = 0.0; 
   float range = 100.0; // calling numbers between 0 - 100
   
   
   srand((unsigned int) time(NULL)); //seeding and initializing the rng(random number generator
   for (i = 0; i < rows; i++) { // for i is less than the amount of rows, i++

      for (j = 0; j < columns; j++) { //for j is less than the amount of columns, y++
           random = (((float)rand()/(float)(RAND_MAX)) * range);
           if (random < 60.0){
               current[i][j] = 1;} //60% chance of human spawn
           else if (random > 60.0 && random < 90.0){
               current[i][j] = 0;} //40% chance of zombie spawn  
           else if (random > 90.0){
               current[i][j] = 2; }//10% chance of removed spawn
      //   current[i][j] = min + (float)(rand()) / ((float)(RAND_MAX / (max - min)));
         //fill current[i][j] with a random number between min and max
      }
   }
   for (i = 0; i < rows; i++) {

      for (j = 0; j < columns; j++) {
         temp[i][j] = current[i][j]; //creates a seperate 2D array and fills it with the same values as current[][]
        //printf("%lld ", current[i][j]); // prints the current 2D array to the screen
      }
    //  printf("\n");
   }
   /*       printf("\n\nTemp\n\n");
            
            for (i = 0; i < rows; i++){
    
                for (j = 0; j < columns; j++){
                printf("%lld", temp[i][j]);  // prints the temp 2D array to the screen
                }
            printf("\n");
            }
       */

}
