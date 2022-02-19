#include <iostream>
using namespace std;

int main(){
    int speed;

    cout << "\nEnter 33, 45, ot 78: ";
    cin >> speed;
    switch (speed){
        case 33:
            cout << "\nLP album\n";
            break;
        case 45:
            cout << "\nSingle Selection\n";
            break;
        case 78:
            cout << "\nObsolete format\n";
            break;
    }

    return 0;
}