#include<iostream>
using namespace std;

int main(){

    int inter_array[4] = {1, 2, 3, 4};
    cout << inter_array[1] << endl;

    int another_array[4];
    another_array[0] = 9;
    another_array[1] = 9;
    cout << another_array[1] << endl;
    *another_array = 29;
    cout << another_array[0] << endl;

    int *ap = another_array;
    ap++;

    return 0;
}