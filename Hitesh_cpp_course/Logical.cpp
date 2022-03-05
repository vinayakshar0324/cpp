#include<iostream>
using namespace std;

int main(){

    bool isFbuser = false;
    bool isGoogleUser = true;
    bool isAdmin = true;
    
    if((isFbuser || isGoogleUser) && isAdmin){
        puts("Welcome Admin");
    }else{
        puts("No admin Access");
    }

    // if(isFbuser || isGoogleUser){
    //     puts ("Welcome User");
    // }

    return 0;
}