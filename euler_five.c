//Sasha Wald
//Systems Level Programming
//HW 3
//9-29-20

//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <stdio.h>

int main(){
    int i = 1;
    int T = 0;
    while(T == 0){
        int j;
        for (j = 1; j <= 20; j++){
            if (i%j == 0){
                T = 1;
            }
            else{
                T = 0;
                i++;
                break;
            }
        }
    }
    printf("smallest positive num: %d\n", i);
    return 0;
}

//solution: 232792560