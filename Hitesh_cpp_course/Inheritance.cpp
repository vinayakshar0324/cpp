#include<iostream>
#include<String>
using namespace std;

class Man{
    string _name;
    int _age;
    Man(){}
protected:
    Man(const string & name, const int & age)
    : _name(name), _age(age){}
    void run(){
        puts("I can Run");};
    public:
        void sayName() const;
    
};

void Man::sayName() const {
    cout << "My name is:" << _name << "and age is:" << _age << endl;
}

//super

class Superman : public Man{
    bool flight;
public:
    Superman(string name): Man(name, 26){};
    void run(){puts("I can run at Light spped");}
};

// spiderman

class Spiderman : public Man{
    bool webbing;
public:
    Spiderman(string name): Man(name, 19){};
    void run(){puts("I can run at normal spped");}
};


int main(){

    Superman clark("kent");
    clark.sayName();
    clark.run();


    Spiderman peter("parker");
    peter.run();
    peter.sayName();

    return 0;
}