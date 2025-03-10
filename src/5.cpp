// A simple C++ program to demonstrate a basic calculator functionality
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int num1, num2, sum;
    
    // Get the first number from the user
    cout << "Enter your first number: ";
    cin >> num1;
    
    // Get the second number from the user
    cout << "Enter your second number: ";
    cin >> num2;
    
    // Calculate the sum of the two numbers
    sum = num1 + num2;
    
    // Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
    
    return 0;
}
 