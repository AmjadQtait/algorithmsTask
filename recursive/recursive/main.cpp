#include <iostream>
#include <chrono>
using namespace std;

 long long factorial(long long n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: factorial of n = n * factorial(n-1)
    return n * factorial(n - 1);
}

int main()
{
    auto start = std::chrono::steady_clock::now();
    int x = 3;
    cout<<factorial(0)<<endl;

    return 0;
}
auto end = std::chrono::steady_clock::now();
