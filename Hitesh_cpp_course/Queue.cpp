#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main(){

    queue<int> myq;

    myq.push(10);
    myq.push(12);
    myq.push(14);
    myq.push(16);
    
    cout << myq.front() << endl;
    cout << myq.back() << endl;

    myq.pop();

    cout << myq.front() << endl;

    return 0;

}