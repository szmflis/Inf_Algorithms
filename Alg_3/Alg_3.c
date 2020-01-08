/*Zsumować 1000 kolejnych liczb nieparzystych zaczynając od 7 (ogólnie zsumować N kolejnych liczb nieparzystych
zaczynając od K)*/

#include<stdio.h>

int main(){
    //scnd param must be uneven
    calc(3,1);
    calc(4,1);
    calc(4,5);
}

int calc(int n, int k){
    int sum = 0;
    int counter = 0;
    int k_forprint = k;
    while(counter<n){
        k = k+2;
        sum += k;
        counter++;
    }
    printf("Input k: %d n: %d result = %d\n",k_forprint, n, sum);
}

