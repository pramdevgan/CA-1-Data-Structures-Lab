#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main (){
    int array[10] = {-1, 3, 5, 22,77};
    int i, k, N, D;
    N=5;
    cout << "The contents of the array are: \n";
    for(i=0; i<N; i++){
        printf("array[%d] = %d\n", i, array[i]); // Printing Array Elements
    }
    cout << "\nEnter the index location from where element is to be deleted: \n";
    cin >> k;
    D = array[k];
    for(i=k; i<=N-2; i++){
        array[i] = array[i+1];
        N=N-1;
    }
    printf("\n %d element deleted from the index located %d\n",D,k);
    cout << "\nThe contents of the array after array deletion are:\n";
    for(i=0; i<N; i++){
        printf("array[%d] = %d\n",i,array[i]);
    }
    getchar();
}