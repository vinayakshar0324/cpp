#include<iostream>
#include<string>


class One{
public:
    void intro(){
        cout << "I am One" ;
    }
};

class Two: public One{
public:
    void intro(){
        cout << "I am Two" << ;
    }
};

int main(){



    return 0;
}