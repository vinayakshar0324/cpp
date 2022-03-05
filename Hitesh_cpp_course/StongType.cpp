#include<iostream>
#include<string>
using namespace std;


string api_call(){
    return "Got some data from web\n";
}

int another_api_call(){
    return 5;
}

int main(){

    auto response = api_call();
    auto rep = another_api_call();
    cout << "API CALL VALUES" << response;
    cout << "API CALL VALUES" << rep << endl; 

    if(typeid(response) == typeid(string)){
        puts("Type of both ID matched\n");
    }

     if(typeid(rep) == typeid(int)){
        puts("Type of both ID matched\n");
    }
    return 0;
}