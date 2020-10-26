//Sasha Wald
//Systems Level Programming
//HW 4
//10-05-20

#include <stdio.h>
#include <stdlib.h>

int multiples(){
    int i;
    int sum = 0;
    for (i = 0; i < 1000; i++){
        if ((i%3 == 0) || (i%5 == 0)){
            sum = sum + i;
        }
    }
    return sum;
}

int smallest_divisible(){
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
    return i;
}

int main(){
    printf("%d\n", multiples()); 
    
    printf("%d\n", smallest_divisible()); 
    
    return 0;
}