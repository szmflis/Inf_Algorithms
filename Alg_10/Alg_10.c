//Algorytm obliczający sumę, tych spośród liczb a1,..., an , dla których liczba k≠0 jest podzielnikiem

#include<stdio.h>

int main(){
    int example_arr[5] = {1,2,3,4,5};
    
    calc(example_arr, 5, 2);
}

int calc(int array[], int array_size, int k){
    int sum = 0;
    for (int i = 0; i<array_size; i++){
        if (array[i]%k == 0){
            sum += array[i];
        }
    }
    printf("Sum equal to: %d", sum);
}