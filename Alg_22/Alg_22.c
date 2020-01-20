#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, j, k;

    int ciag_a[5] = {1,5,17,69,420};
    int ciag_b[6] = {2,4,23,76,399,423};
    int ciag_c[11];

    for (i = j = k = 0; i<5 && j<6 ; k++){
        if (ciag_a[i] < ciag_b[j]){
            ciag_c[k] = ciag_a[i];
            i++;
        } else {
            ciag_c[k] = ciag_b[j];
            j++;
        }
    }
    
    if (i<5) {
        for (; i<5 ; i++, k++){
            ciag_c[k] = ciag_a[i];
        }
    } else {
        for (; j<6; j++,k++){
            ciag_c[k] = ciag_b[j];
        }
    }

    for (int i = 0; i<5+6; i++){
        printf("%d, ", ciag_c[i]);
    }
    
}