#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

int main(){

    deque<int> myNums;

    myNums.push_back(10);
    myNums.push_front(20);
    myNums.push_front(30);
    myNums.push_front(40);

    cout << myNums.size() << endl;

    cout << myNums.at(2) << endl;

    myNums.pop_back();

    for(auto n : myNums){
        cout << n << " ";

        
    }

    return 0;
}