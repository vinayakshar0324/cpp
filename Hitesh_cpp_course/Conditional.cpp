#include<iostream>
using namespace std;

int main(){
    int rating = 5;

    if (rating == 5)
    {
        puts("5 star rated");
    } else{
        puts("Not 5 star rated");
    }

    printf("Your rating feedback is %d\n", rating == 5 ? "true block" : "false block");
    return 0;
}