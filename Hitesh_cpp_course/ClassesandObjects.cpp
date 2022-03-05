#include<iostream>
#include<string>
using namespace std;


class User{
    int secret = 22;


    public :
        string name = "default";
        void classMessage(){
            cout << "class is Great" << name << endl;
        }
        //setter
        void setSecret(const int & newsecret){secret = newsecret;}
       //getter
        int getSecret()const{return secret;}
};

//Method sepration
void User::classMessage(){
    cout << "Class is great" <<name << endl;
}



int main(){

    User sam;
    sam.name = "Sam";
    sam.classMessage();
    sam.setSecret(333);

    cout << sam.getSecret() << endl;

    User Hitesh;
    Hitesh.classMessage();


    //const qualified method 
    const User rock;
    cout << rock.getSecret() << endl;

    return 0;
}