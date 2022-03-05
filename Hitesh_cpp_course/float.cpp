#include<iostream>
using namespace std;

int main(){

    printf("Float Size is %ld bits \n", sizeof( long double) * 8 );

    float MyPreciseValue = 20.2 + 20.2;

    printf("My Precise value is: %1.30f in float\n", MyPreciseValue);

    return 0;
}