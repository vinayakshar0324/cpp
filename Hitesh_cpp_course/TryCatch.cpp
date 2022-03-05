#include<iostream>
using namespace std;

int main(){

    int call_api = 2;

    try
    {
        cout << "trying to use API vlaues\n";
        cout << "did sometesting \n";
        throw call_api;
        cout << "No code Execute after Throw\n";
    }
    catch(int x)
    {
        cout << "Exceptioon Handeld\n";
    }
     
     cout << "Keep on moving\n";
    
    return 0;
}