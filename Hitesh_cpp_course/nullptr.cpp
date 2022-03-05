#include<iostream>


void printVal(int a){
    printf("Integer value is %d\n", a);
}

void printVal(double a){
    printf("Double value is %f\n", a);
}

void printVal(int * a){
    printf("pointer vlaue is %p\n");
}


int main()
{
    printVal(nullptr);
    return 0;
}