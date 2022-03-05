#include<iostream>
using namespace std;

int main(){

    int myNumbers[] = {4, 5, 6, 7, 8, 9, 0};

    int i = 0;

    while (i < 7)
    {
        if (i ==3)
        {
            break;
            // continue;
        }
        
        cout << "Current number is: " << myNumbers[i] << endl;
        i++;
    }
    cout << "Outside of loop" << endl;
    


    return 0;
}