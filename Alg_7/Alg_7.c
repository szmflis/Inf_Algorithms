//Algorytm znajdowania sumy podzielników danej liczby (do pierw!!)

#include<stdio.h>
int main(){
    calc(6);
    calc(26);
    calc(28);
    calc(126);
}

int calc(int x){
    int sum = 0;
    for (int i = 1; i<x; i++){
        if (x%i == 0){
            sum += i;
        }
    }
    printf("For num:    %d  sum is: %d\n", x, sum);
}