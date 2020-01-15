//Algorytm sprawdzający czy istnieje wiersz i kolumna o identycznej sumie,

#include <stdio.h>

int main(){
    int array[3][3] = {
        {1,3,3},
        {3,6,9},
        {2,2,1}
    };

    int sumy_kolumn[3] = {};

    for (int i = 0; i<3; i++){
        int sum = 0;
        for (int j = 0; j<3; j++){
            sum += array[j][i];
        }
        sumy_kolumn[i] = sum;
    }

    for (int i = 0; i<3; i++){
        printf("Suma kolumny %d rowna %d\n",i+1, sumy_kolumn[i]);
    }

    int sumy_wierszy[3] = {};

    for (int i = 0; i<3; i++){
        int sum = 0;
        for (int j = 0; j<3; j++){
            sum += array[i][j];
        }
        sumy_wierszy[i] = sum;
    }

    for (int i = 0; i<3; i++){
        printf("Suma wiersza %d rowna %d\n",i+1, sumy_wierszy[i]);
    }

    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            if (sumy_kolumn[i] == sumy_wierszy[j]){
                printf("Istnieje wiersz i kolumna o tej samej sumie");
            }
        }
    }

}