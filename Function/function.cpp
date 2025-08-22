#include <iostream>
using namespace std;

// Sum of 2 number 
double sum(double a, double b){
    double s = a + b;
    return s;
}

// Min of 2 number
int minOfTwo(int a, int b){
    if(a < b){
        return a;
    }else {
        return b;
    }
}

// problem 1: Calculate the sum of numbers from 1 to N 
int sumN(int n){
    int sum = 0;
    
    for(int i =1; i<=n; i++){
        sum+=i;
    }
    
    return sum;
}

// Problem 2: Calculate N factorial
int facOfN(int n){
    int fac = 1;
    
    for(int i = 1; i<=n; i++){
        fac*=i;
    }
    
    return fac;
}

int main() {
    cout << "Sum of two number " << sum(5.56, 10.88) << endl;
    cout << "Min of two number " << minOfTwo(5,20) << endl;
    cout << "Sum of N " << sumN(5) << endl;
    cout << "Factorial of N " << facOfN(4) << endl;
    return 0;
}