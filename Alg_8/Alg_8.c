/* Sprawdzić czy dana liczba jest liczbą doskonałą (tzn. suma wszystkich
 mniejszych od niej podzielników jest równa tej
liczbie – np. 6, 28) */

#include<stdio.h>

int main(){
    calc(6);
    calc(28);
    calc(33);
}

int calc(int x){
    int sum = 0;
    for (int i = 1; i<x; i++){
        if (x%i == 0){
            sum += i;
        }
    }
    printf("For num:    %d sum is: %d\n", x, sum);
    if (sum == x){
        printf("Number is perfect\n");
    } else {
        printf("Number is not perfect\n");
    }
}