#include<iostream>
#include<string>

using namespace std;

class myFloat{
    float ft;
public:
    myFloat(){
        ft = 0.1;
    }
    void getValue(){
        cout << ft << endl;
    }
    void operator ()(float v){
        ft += v;
    }
};



int main(){


    myFloat floaty;
    floaty.getValue();

    floaty(0.1);
    floaty.getValue();


    return 0;
}