
#include <iostream>
using namespace std;

int main() {
    int n = 6;
    
    for(int i = 1; i < n; i++){
        // space
        for(int j = 0; j < n - i - 1; j++){
            cout << " "; 
        }
        
        // nums 
        for(int j = 1; j < i + 1; j++){
            cout << j;
        }
        
        cout << endl;
    }
    
    return 0;
}