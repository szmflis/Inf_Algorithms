//Algorytm obliczania n-tego wyrazu ciągu Fibonacciego (F0=0, F1=1, Fn=Fn-2+Fn-1)
//0, 1, 1, 2, 3, 5, 8, 13, 21,
int main(){
    fib(21);
    fib(32);
    fib(7);
}

int fib(int n){
    int previous = 1;
    int current = 1;
    for (int i = 2; i<n; i++){
        int next = previous+current;
        previous = current;
        current = next;
    }

    printf("Fib %d found: %d\n", n, current);
}