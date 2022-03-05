#include<iostream>
using namespace std;

int main(){

    int myNumber[] = {1, 2, 3, 4, 5, 6};

    
    for(int i = 0; i < 5; i++){
        cout << myNumber[i] << endl;
    }   

    cout << "Get a break" << endl;


    for (int i: myNumber)
    {
        cout << i << endl;
    }
    

    return 0;

}