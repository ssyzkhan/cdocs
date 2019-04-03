#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int *a, int n);

int main(int argc, char const *argv[])
{
    int a[] = {5,7,3,2,8,11,33,27,21,89,17};

    InsertionSort(a,10);
    for(int i = 0; i < sizeof(a); i++)
    {
        printf("%d ", a[i]);
    }
    
    printf("\nHello world!");
    return 0;
}

void InsertionSort(int *a, int n){
    int i,j,key;
    for( j = 1; j < n; j++)
    {
        key = a[j];
        i = j-1;
        while(i>=0 && a[i] > key){
            a[i+1] = a[i];
            i--;
        }
        a[i+1] = key;
    }
    
}
