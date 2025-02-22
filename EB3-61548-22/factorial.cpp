//coded using Falcon C++ editor
//By Joshua Mumo EB3/61548/22
#include <iostream>
#include <ctime> // For measuring execution time
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial of a negative number is undefined." << endl;
    } else {
        // Start measuring time
        clock_t start = clock();

        long long result = factorial(num);

        // Stop measuring time
        clock_t stop = clock();
        
        // Calculate execution time in seconds
        double duration = double(stop - start) / CLOCKS_PER_SEC;

        // Display results
        cout << "Factorial of " << num << " is " << result << endl;
        cout << "Time taken: " << duration << " seconds" << endl;
    }

    return 0;
}
