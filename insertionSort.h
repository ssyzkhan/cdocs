#ifndef _INSERTIONSORT_H
#define _INSERTIONSORT_H
void insertionSort(int *a, int n){
    int i,j,key;
    for(j=1;j<n;j++){
        key=a[j];
        i=j-1;
        while((i>=0)&&(a[i]>key)){
            a[i+1]=a[i]; 
            i--;
        }
        a[i+1]=key;
    }
}
void test(){
    int a[]={5,1,9,4,6,2,0,3,8,7},i;
    insertionSort(a+1,7);
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
}
#endif