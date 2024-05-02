#include <iostream>
#include <chrono>
using namespace std;

 long long factorial(long long n)

 {
     long long result = 1;
     for (int i = 1 ; i<=n ; i++)
     {
         result*=i;
     }
     return result ;
 }
int main()
{
    auto start = std::chrono::steady_clock::now();
    cout<<factorial(0)<<endl;

    return 0;
}
auto end = std::chrono::steady_clock::now();
