#include<iostream>
using namespace std;

int lifeUp(){
    static int life = 3;
    return life++; // post fix operation 
    // ++life prefix
}


int main(){

    int life = 3;
    cout << "Your Starting Game Life is: " << endl;

    life = lifeUp();
    printf("Your Updated Game Life is %d\n", life);

    return 0;
}