#include<iostream>
#include<conio.h>
#include <stdlib.h>
#include<algorithm>
using namespace std;
int binary(int [], int, int);
int main (){
    int *arr;
    int i, N, k, index;
    system("cls");
    cout <<"Enter the number of elements in the array arr:\n";
    cin >> N;
    arr = (int*) malloc(sizeof(int));
    cout << "\nEnter the "<<  N << " elements of the array arr in sorted format:\n";
    for(i=0; i<N;i++)
    cin >> arr[i];
    cout << "\nEnter the element to be searched:\n";
    scanf("%d",&k);
    index=binary(arr,N,k);
    if(index ==-999)
    printf("\nElement %d is not present in array arr[%d]",k,N);
    else
    printf("\nElement %d is stored at index location %d in the array arr[%d]",k,index,N);
    getch();
}

int binary(int array[], int size, int num){
    int i=0, j=size, k;
    while(i<=j){
        k=(i+j)/2;
        if(array[k]==num)
            return k;
        else if(array[k]<num)
            i=k+1;
        else
            j=k-1;
        
    }
    return (-999); // Unsuccessfull seach
}