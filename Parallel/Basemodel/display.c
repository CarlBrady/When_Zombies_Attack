#include"functions.h"

void display(){
long long x =0,y =0,zombies=0,humans=0,removed = 0;
for(x = 0; x < rows; x++)
    {
        for (y = 0; y < columns; y++)
        {
           printf("%lld ", current[x][y]);
            if (current[x][y] == 1) {
                humans++;
                
            }
             else if(current[x][y] == 0){
              zombies++;  
            }
            else{
            removed++;  
            }
        }
    printf("\n");
    }
}
