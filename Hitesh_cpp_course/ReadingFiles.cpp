#include<iostream>
#include<string>

constexpr int maxbuffer = 1024;

using namespace std;

int main(){

    const char * fileName = "mythisfile.txt";
    const char * information = "lorem ipsum dolor sit emmt";

    // FILE * fh = fopen(fileName, "w"); // "a" is for append

    // for(int i = 0; i <50; i++){
    //     fputs(information, fh);
    // }

    // fclose(fh);


    //reading file

    char buf[maxbuffer];

    FILE * fh = fopen(fileName, "r");

    while (fgets(buf, maxbuffer, fh))
    {
        fputs(buf, stdout);
    }
    fclose(fh);
    


    return 0;
}