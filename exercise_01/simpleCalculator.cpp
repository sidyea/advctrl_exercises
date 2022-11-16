#include <iostream>

using namespace std;

double sum(double a,double b){
    
    return a + b;
}

double subtract(double a, double b){

    return a - b;
}

double multiply(double a, double b){
    return a * b;
}

double divide(double a, double b){
    if(b != 0){
        return a / b;
    }else{
        cout << "b has value " << b << "!\n"; //should print val 0.0
    }
}

int main(){

    double a,b;
    double sum, subtract;

    cout << "input a: ";
    cin >> a;
    cout << "\ninput b: ";
    cin >> b;

    return 0;
}