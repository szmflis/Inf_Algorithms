//26. Obliczyć minimum i maksimum w tablicy dwuwymiarowej.

#include<stdio.h>

int main(){
    int array[3][3] = {
        {1,2,3},
        {21,82,200},
        {-69,420,-420}
    };

    int max = array[0][0];
    int min = array[0][0];

    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            if (array[i][j] > max){
                max = array[i][j];
            }
            if (array[i][j] < min){
                min = array[i][j];
            }
        }
    }

    printf("Max:\t%d\nMin:\t%d\n", max, min);
}