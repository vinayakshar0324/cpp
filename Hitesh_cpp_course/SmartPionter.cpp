#include<iostream>
#include<string>
#include<memory>
using namespace std;

class User{
    public:
    User(){
        cout << "User Created\n"; 
    }
    ~User(){
        cout << "User Destroyed\n"; 
    }
    void testfunc(){
        cout << " I am a test function\n";
    }
};


int main(){


    {
        // unique_ptr<User> sam(new User());

        unique_ptr<User> sam = make_unique<User>();
        sam->testfunc();
    }


    {
        shared_ptr<User> Tim = make_shared<User>();
        shared_ptr<User> timm = Tim;

    }
    cout << "Outside Code\n";
    return 0;
}   