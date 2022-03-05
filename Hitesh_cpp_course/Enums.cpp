#include<iostream>
using namespace std;

enum MsOffics {
    BOLD = 5,
    ITALICS,
    UNDERLINE,
    CROSSED
}; // auto increment in enums


int main(){

    int myAttributes = BOLD;


    cout << myAttributes << endl;

    return 0;
}