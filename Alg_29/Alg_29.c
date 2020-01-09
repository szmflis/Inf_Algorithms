//29. Algorytm obliczający średnie arytmetyczne poszczególnych kolumn tablicy dwu-wymiarowej.

#include<stdio.h>

int main(){
    
    int array[4][3] = {
        {5,10,5},
        {2,4,6},
        {5,50,5},
        {5,20,5}
    };

    for(int j = 0; j < 3; j++){
        float sum = 0;
        for (int i = 0; i < 4; i++){
            sum+=array[i][j];
        }
        printf("Average: e%f \n", sum/4);
    }
}