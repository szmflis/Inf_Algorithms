//Algorytm znajdowania liczby wystąpień danej liczby k w ciągu a1,..., an

#include<stdio.h>

int main(){
    int array[5] = {13, 3, 25, 13, 7};
    int k = 13;
    calc(array, 5, k);
}

int calc(int array[],int len, int k){
    int times_spotted = 0;
    for (int i = 0; i<k; i++){
        if (array[i] == k){
            times_spotted++;
        }
    }
    printf("Num: %d spotted %d times\n", k, times_spotted);
}