//Algorytm odwracania kolejności elementów w ciągu a1,..., an
#include<stdio.h>
int main(){
    int array_a[6] = {1,2,3,4,5,6};
    invert(array_a,6);
    int array_b[7] = {1,2,3,4,5,6,7};
    invert(array_b,7);
}

int invert(int array[], int length){
    int revIndex = length-1;
    for (int i = 0; i<length/2; i++){
        int temp_left = array[i];
        int temp_right = array[revIndex];
        array[i]= temp_right;
        array[revIndex] = temp_left;
        revIndex--;
    }
    
    for(int i = 0; i<length; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}