#include<iostream>
#include<string>

using namespace std;

int main(){

    static const char * originalFile = "OriginalFile.txt";

    FILE * fh = fopen(originalFile, "w");
    fclose(fh);


    return 0;
}