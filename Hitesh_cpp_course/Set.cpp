#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

int main(){

    set<int, greater<>> mySet = {12, 13, 14, 15, 14, 12};

    mySet.insert(2);
    mySet.insert(3);
    mySet.insert(4);
    mySet.insert(2);
    mySet.insert(6);
    
    for(auto i = mySet.begin(); i != mySet.end(); ++i){
        cout << " " << *i << endl;
    }
    
    for(const auto &v: mySet){
        cout << v << " ";
    }
    cout << endl;

    return 0;
}