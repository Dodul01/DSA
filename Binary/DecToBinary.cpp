// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int convertDesToBinary(int num){
    int ans = 0, pow = 0;
    
    while (num > 0){
        int rem = num % 2;
        num /= 2;
        
        ans += (rem * pow);
        pow *= 10;
        
    };
    
    return ans;
};

int main() {
    int num = 50;
    cout << convertDesToBinary(num) << endl;
    cout << "Hello World!";

    return 0;
}