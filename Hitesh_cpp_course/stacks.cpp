#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

int main(){

    stack<int> myStack;

    myStack.push(10);
    myStack.push(12);
    myStack.push(14);
    myStack.push(15);

    cout << myStack.size() << endl;
    cout << myStack.top() << endl;

    myStack.pop();

    cout << myStack.top() << endl;

    while (!myStack.empty())
    {
        cout << " " << myStack.top();
        myStack.pop();
    }
    cout << "\n";
    

    return 0;
}