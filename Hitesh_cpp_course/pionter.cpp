#include<iostream>
using namespace std;

int main(){
        int life;
        life = 4;

        int card;
        card = 40;
        int my_card = card;

        int *myp;
        myp = &card;

        my_card = *myp;

        my_card = *myp; // pionter deref.

        printf("the value of card is: %d\n" , my_card);
        printf("the value of card is: %p\n", myp);
        printf("value of card is: %d\n", my_card);
    return 0;
}