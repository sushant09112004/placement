#include <iostream>
#include <string>
#include <algorithm> // Required for std::max
using namespace std;
int main() {
    std::string str = "5931249";
    int max_digit = 0; // Renamed 'max' to be more descriptive and avoid conflict

    // A range-based for loop is a more modern and readable way to iterate
    for (char c : str) {
        // 'c' - '0' correctly converts the character digit to an integer
        // The call to the max function is now correct: std::max()
        max_digit = std::max(max_digit, c - '0');
    }

    // Print the result to the console
    std::cout << "The maximum digit is: " << max_digit << std::endl;

    return 0;
}