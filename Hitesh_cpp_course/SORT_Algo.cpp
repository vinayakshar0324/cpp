#include<iostream>
#include<string>


using namespace std;

int main(){


    int numbers[] = {3, 2, 6, 9, 4, 7};

    cout << "Unsorted values" << endl;
    for(int n : numbers){
        cout << n << " "; 
    }

    sort(numbers, numbers+6);
    // sort_heap(numbers, numbers+6);

    cout << "Sorted values" << endl;
    for(int n : numbers){
        cout << n << " "; 
    }

    return 0;
}