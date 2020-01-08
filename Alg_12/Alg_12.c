//12. Algorytm znajdowania elementu minimalnego i maksymalnego w ciągu a1,..., an. 

#include<stdio.h>

int main(){
    int array[6] = {1,23,-8,-928,123,7};
    find(array, 6);
    int next_array[7] = {92,19,21,1242,-3,-4,-11};
    find(next_array, 7);
}

int find(int array[], int length){
    int min = array[0];
    int max = array[0];

    for (int i = 0; i<length; i++){
        if (array[i] > max){
            max = array[i];
        } else if (array[i] < min){
            min = array[i];
        }
    }
    printf("Max found: %d   Min found: %d\n", max, min);
}