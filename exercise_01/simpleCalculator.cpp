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
        cout << "b has value " << b << ". Should be nonzero!\n"; //should print val 0.0
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
    
    cout << "\n Menu: +,-,/,*,m \n Input symbol for operation: ";
        cin >> op;

    if(op == '+'){ //in c++ " " define a string literal and ' ' define a char literal
        cout << "Sum is " << sum(a,b) << "\n";
    }

    if(op == '-'){
        cout << "Difference is " << subtract(a,b) << "\n";
    }

    if(op == '/'){
        cout << "Ratio is " << multiply(a,b) << "\n";
    }

    if(op == '*'){
        cout << "Product is " << divide(a,b) << "\n";
    }

    if (op == 'm'){
        cout << "Mean is " << mean(a,b) << "\n";
    }

    return 0;
}