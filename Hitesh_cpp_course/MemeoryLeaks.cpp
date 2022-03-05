#include<iostream>
using namespace std;

int main(){

    int * myp;

    // myp = new int[100];

    // cout << "Memory space Allocated\n";

    try{
        myp = new int [10000];
        cout << "Memory Allocated\n";
    }catch(...){
        cout << "failed to allocate memory";
    }

    int x = 5;
    x << 3;

    delete [] myp;

    return 0;
}