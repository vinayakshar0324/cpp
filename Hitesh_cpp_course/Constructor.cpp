#include<iostream>
#include<string>
using namespace std;

class Phone{
    string _name = "";
    string _os = "";
    int _price = 0;

    Phone();//default Constructor


public:
    Phone(const string & name, const string & os, const int & price);//parameter Constructor
    Phone(const Phone &); // copy Constructor
    string getName(){return _os;}
    // ~Phone();//Destructor
};

Phone::Phone() : _name(), _os("Oneui"), _price(){
    puts("Deafult Constructor");
}

Phone::Phone(const string & name, const string & os, const int & price ): _name(name), _os(os), _price(price){
    puts("This is a parameter Constructor");
}

Phone::Phone(const Phone & values){
    puts("OVERRITE copy Constructor");
    _name = values._name,
    _os = "Skinned-"+values._os,
    _price = values._price;

}

Phone::~Phone(){
    printf("Deconstructor Called for %s\n", _name.c_str());
}


int main(){

    // Phone samsungA1;

    Phone Oneplus8("OP8", "andriod", 799);
    cout << Oneplus8.getName() << endl;

    


    Phone OnePlus8s = OnePlus8s;
    cout << OnePlus8s.getName() << endl;


    return 0;
}