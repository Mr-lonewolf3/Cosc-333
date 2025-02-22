//coded using Falcon C++ editor
//By Joshua Mumo EB3/61548/22
#include <iostream>
// execution time
#include <ctime>

using namespace std;

// Recursive Fibonacci function
long long fibonacci_recursive(int n) {
    if (n <= 1)
        return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// Fibonacci function
long long fibonacci_iterative(int n) {
    if (n <= 1)
        return n;
    
    long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Fibonacci sequence is not defined for negative numbers." << endl;
    } else {
        // Measuring time for recursive Fibonacci
        clock_t start_recursive = clock();
        long long result_recursive = fibonacci_recursive(num);
        clock_t stop_recursive = clock();
        double time_recursive = double(stop_recursive - start_recursive) / CLOCKS_PER_SEC;

        // Measuring time for iterative Fibonacci
        clock_t start_iterative = clock();
        long long result_iterative = fibonacci_iterative(num);
        clock_t stop_iterative = clock();
        double time_iterative = double(stop_iterative - start_iterative) / CLOCKS_PER_SEC;

        // Display results
        cout << "\nFibonacci (Recursive) of " << num << " is " << result_recursive;
        cout << " | Time taken: " << time_recursive << " seconds" << endl;

        cout << "Fibonacci (Iterative) of " << num << " is " << result_iterative;
        cout << " | Time taken: " << time_iterative << " seconds" << endl;
    }

    return 0;
}
