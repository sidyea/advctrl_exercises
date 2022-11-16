#include <iostream>

using namespace std;

int main(){

    //Initialize 2D array
    char msg[7][10]
        = {"Hello", "World!", "to", "my", "first", "C++", "Program!"};

    //Printing loop
    for (int i; i < 7; i++)
        cout << msg[i] << " ";
    
    return 0;
    
}