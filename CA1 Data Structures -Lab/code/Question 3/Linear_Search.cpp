#include <iostream>
using namespace std;
int main(){
    int array[5] = {22,19,4,8,10};
    int i, flag, k, index;
    flag = 0;
    cout << "The contents of the array are: " << endl;
    for (i = 0; i < 5; i++){
        printf("array [%d] = %d\n", i, array[i]);
    }
    printf ("\nEnter the elements to be searched: ");
    cin >> k;
    for(i=0;i<5;i++) /*Scanning array elements one by one*/
    if(k==array[i])
    {
        flag = 1; /*Successful Search*/
        index = i;
        break;
    }
    else
        ;
    if(flag==1){
    printf("Search is successful! \nElement %d is present at index location %d in the array",k,index);
    }
    else /*Successful Search*/
        printf("Unsuccessful Search!");
    getchar();
}