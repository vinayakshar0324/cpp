#include<iostream>
#include<string>

using namespace std;

template <typename T>
void func(T t){
    cout << "One Func" << t << endl;
}

template <typename T, typename...Args>
void func(T t, Args...args){
    cout << "TWo func" <<t << endl;
    func(args...)
}

int main(){

    string myName = "Hitesh";
    func(1);
    func(1, 2, 3.4, 5, myName);


    return 0;
}