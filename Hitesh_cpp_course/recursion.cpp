#include<iostream>
int Factorial(int n);
using namespace std;


//recursion is a function that keeps calling itself but with a exit stategy

int main(){

//factorial : 5*4*3*2*1
//factorail : 1*2*3*4*5

    int n;

    cout << "Enter a value" << endl;
    cin >> n;

    cout << "Your Result For factorial : " << Factorial(n) << endl;


    return 0;
}
int Factorial(int n){
   if(n > 1){
       return n * Factorial(n-1);
   }else{
       return 1;
   }
}