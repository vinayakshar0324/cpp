#include<iostream>
using namespace std;

int main(){
    int rating = 3;

    switch(rating){
        case 1:
            puts("Rated as 1 star");
            break;
        case 2:
            puts("Rated as 2 star");
            break;
        case 3:
            puts("Rated as 3 star");
            break;
        case 4:
            puts("Rated as 4 star");
            break;
        case 5:
            puts("Rated as 5 star");
            break;
        default:
            puts("Please rate between 1 and 5");
            break;   
    }
    return 0;
}