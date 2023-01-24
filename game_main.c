/*  ========== H02 - Guessing Game ============
 *
 *   Student: Zefeng Zhao
 *   Semester: 23 Spring
 *
 *   A simple guessing game program. This
 *   Uses a separate main file where system
 *   specific stuff is set, like the random seed. 
 *
 */

#include <stdlib.h> 
#include <time.h>
#include "guessing_game.h"




/* Program entry point*/
int main() {

    int outCount = 0;
    int cntEachRound[5];
    int j = 0;
    printf("%s\n", "====================================================");
    printf("%s\n", "| Welcome to the Guessing Game. Let's get started. |");
    printf("%s\n", "====================================================");
    while(j < 5){
        cntEachRound[j] = 0;
        j++;
    }

    // round
    while(outCount < 5){
        printf("%s\n", "====================================================");
        printf("|                     Round %d:                     |\n", outCount+1);
        printf("%s\n", "====================================================");
        unsigned int seed = time(NULL);
        srand(seed);
        int random = rand()%10+1;
        //  time
        
        while(1){
            printf("%s", "Guess a number (1 to 10):");
            int num;
            scanf("%d", &num);
            cntEachRound[outCount]++;
            if(num == random){
            printf("%s\n", "Congratulations, you found it!");
            break;
            }else if(num < random){
            printf("%s\n", "Your guess is too low.");
            }else{
            printf("%s\n", "Your guess is too high.");
            }
        }

        outCount++;
    }

    int i = 0;
    printf("%s\n", "====================================================");
    printf("%s\n", "|             Result of the round                  |");
    printf("%s\n", "====================================================");

    while(i < 5){
        printf("Round %d took you %d guesses.\n", i+1, cntEachRound[i]);

        i++;
    }

    return 0;
}