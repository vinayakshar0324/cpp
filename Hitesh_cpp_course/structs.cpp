#include<iostream>
using namespace std;

struct User
{
    const int UID;
    const char *Name;
    const char *Email;
    int course_count;
};


int main(){

    User mickey = {001, "Mickey", "Mickey@cartoon.com", 2};

    cout << mickey.Email << endl;

    User Donald = {001, "Donald", "Donald@cartoon.com", 3};

    cout << Donald.Email << endl;
    Donald.course_count = 4;

    cout << Donald.course_count << endl;

    return 0;
}