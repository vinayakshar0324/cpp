#include<iostream>
using namespace std;


void lifeUp(int *life){
    ++(*life);
}

int addme(int a, int b){
    return a + b;
}

float addme(float a, float b){
    return a + b;
}

int main(){
    int life = 3;
    lifeUp(&life);
    // cout << life << endl;

    int v1 = 4;
    int v2 = 5;
    float v3 = 5.6;
    float v4 = 7.5;

    cout << addme(v1, v2) << endl;
    cout << addme(v3, v4) << endl;

    return 0;
}


// call by value
// call by refrence
