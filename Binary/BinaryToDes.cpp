// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int binaryToDes(int num){
    int ans = 0, pow = 1;
    
    while (num > 0){
        int rem = num % 10;
        ans += rem * pow;
        
        num /= 10;
        pow *=2;
        
    };
    
    return ans;
};

int main() {
    int num = 110010;
    cout << binaryToDes(num) << endl;
    cout << "Hello World!";

    return 0;
}