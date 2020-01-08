//Algorytm sprawdzający czy ciąg liczb a1,..., an jest słabo rosnący

#include<stdio.h>

int main(){
    int array_a[4] = {1,2,3,4};
    check(array_a, 4);
    int array_b[6] = {1,1,3,3,5,87};
    check(array_b, 6);
    int array_c[4] = {5,4,12,31};
    check(array_c,4);
}

int check(int array[], int length){
    int flag = 1;
    int num_current = array[0];
    for (int i=1; i<length; i++){
        if (array[i]<num_current){
            flag=0;
            break;
        }
        num_current = array[i];
    }

    if (flag == 1){
        printf("rosnacy\n");
    }else {
        printf("nierosnacy\n");
    }
}