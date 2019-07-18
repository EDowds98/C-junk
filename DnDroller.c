/* 1. get the first number and store it. EDIT: done
   2. store every number after 'd'
   3. for i times (where i is the first number) generate a random number between 1 and the second number
   4. print number

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int diceAmount;
    char numString;
    int num;
    char diceroll[10];
    int i;

    printf("input dice roll\n");
    scanf("%s", diceroll);
    printf("%s\n", diceroll);
    
    diceAmount = atoi(diceroll);
    printf("%d\n", diceAmount);
    
    char* token = strtok(diceroll, "d");
    while (token != NULL) {
      
        printf("%s\n", token);
        token = strtok(NULL, "d");
    }
}

//TODO: read about pointers properly, it will be trivial to extract the numbers
//      and convert them by using pointers to pull the characters out of memory and
//      and converting them into integers. Don't use atoi(), use the ascii conversion.
