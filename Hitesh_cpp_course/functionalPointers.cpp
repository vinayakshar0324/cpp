#include<iostream>

using namespace std;

int getTwo(){
    return 2;
}

void intresting(){
    puts("I am Intresting");
}

int main(){

    int whatIGot = getTwo();

    void (*pointsToIntresting)() = intresting; // funtional Pointer

    cout << whatIGot << endl;
    pointsToIntresting();
    return 0;
}