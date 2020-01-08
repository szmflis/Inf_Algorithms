//Algorytm dzielenia z resztą dwóch liczb całkowitych (nieujemnej przez dodatnią) przy pomocy odejmowania

#include <stdio.h>

int main()
{
    calc(13, 3);
    calc(4, 3);
    calc(2, 3);
    calc(25, 3);
    calc(27, 3);
    calc(31, 3);
}

void calc(int x, int y)
{
    int counter = 0;
    
    while (x >= y)
    {
        x = x - y;
        counter++;
    }
    printf("Result %d,%d\n", counter, x);
}