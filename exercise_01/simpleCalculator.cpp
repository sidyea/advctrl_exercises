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
        cout << "impossible! 'b' has value " << b << ". Should be nonzero!\n"; //should print val 0.0
        return 0;
    }
}

double mean(double a, double b){
    return divide(sum(a,b),2.0);
}

int main(){

    double a,b;
    char op;

    cout << "input a: ";
        cin >> a;
    cout << "\ninput b: ";
        cin >> b;
    
    cout << "\nMenu: +,-,/,*,m \nInput symbol for operation: ";
        cin >> op;

    if(op == '+'){ //in c++ " " define a string literal and ' ' define a char literal
        cout << "Sum is " << sum(a,b) << "\n";
    }
    if(op == '-'){
        cout << "Difference is " << subtract(a,b) << "\n";
    }
    if(op == '/'){
        cout << "Ratio is " << divide(a,b) << "\n";
    }
    if(op == '*'){
        cout << "Product is " << multiply(a,b) << "\n";
    }
    if (op == 'm'){ //find the mean using other functions
        cout << "Mean is " << mean(a,b) << "\n";
    }

    return 0;
}