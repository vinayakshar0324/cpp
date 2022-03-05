#include<iostream>
using namespace std;

int main(){
    
    char MyString[] = "Hitesh";
    char MyName[] = {'h', 'i', 't', 'e', 's', 'h', 0};
    printf("My Name is %s\n", MyName);


    cout << "Get a Break" << endl;

    for(int i = 0; MyName[i] != 0; i++ ){
        cout << "character is: " << MyName[i] << endl;
    }
     cout << "Get a Break - 2" << endl;
     for(char * cp = MyName; *cp != 0; cp++ ){
        cout << "character is: " << *cp << endl;
    }

    cout << "Get a Break - 3" << endl;

    for(char i: MyName){
        if(i ==0) break;
        cout << "char is: " << i << endl;

    }

    return 0; 
}