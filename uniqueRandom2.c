#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef enum Duplicate {false, true} boolean;
int Numbers[12]; //array to store the random numbers in
int i, x, y, j, count;
int main()
{
    time_t t;
    srand((unsigned)time(&t));   
    boolean Duplicate = false;  
    for ( i = 0; i < 12; i++)
        Numbers[i] = -1;
          
    count = 0;
    while(Numbers[count] == -1 || count < 12)
    {   
        x = rand() %36 + 1; 
        Numbers[count] = x;
        do
        {    
            for(j = count - 1; j > -1; j--)     
            {
                if (Numbers[count] == Numbers[j])
                {
                    //Duplicate = true;
                    Numbers[count] = -1;
                    break;
                }
            }
        } while (Duplicate == true);

            //printf("%d\n", Numbers[count]);
            if(Numbers[count] != -1)
            {
                printf("%d --- %d\n", count, Numbers[count]);
                count++;
            }

    }
return 0;
}