// 3. Buatlah program yang dapat memberikan input dan output sbb.

#include <iostream>
#include <string>

using namespace std;

void printPattern(int n) {
    for (int i = n; i >= 1; i--) {
        // Print numbers descending
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        
        // Print single asterisk
        cout << "* ";
        
        // Print numbers ascending
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        
        cout << endl;
    }
}

int main() {
    int input;
    cout << "Input: ";
    cin >> input;
    
    cout << "Output:" << endl;
    printPattern(input);
    
    return 0;
}