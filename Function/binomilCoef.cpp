// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int sumOfDigits(int num){
    int digSum = 0;
    
    while(num > 0){
        int lastDig = num % 10;
        num /= 10;
        
        digSum += lastDig;
    }
    
    return digSum;
}

// Binomial Coefficient
int factorial(int n){
    int fact = 1;
    
    for(int i = 1; i <=n; i++){
        fact*=i;
    }
    
    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);
    
    return fact_n / (fact_r * fact_nmr);
}

int main() {
    int n = 6, r =3;
    cout << "Binomial Coef " << nCr(n, r) << endl;
    
    cout << "Sum of digits " << sumOfDigits(2356) << endl;
    cout << "Hello World!";

    return 0;
}