#include<iostream>
using namespace std;

bool isPrime(int n);
bool isPrimeOptimized(int n);
bool isPrimeMoreOptimized(int n);


int main()
{
    int n; bool answer;
    cout << "Enter a number: ";
    cin >> n;
    answer = isPrime(n);
    cout << "The number " << n << " is prime: " << boolalpha << answer;
    return 0;
}

// Time: O(n), Basic approach
bool isPrime(int n)
{
    if(n == 1)
        return false;
    for(int i = 2; i < n; i++)
        if(n%i == 0)
            return false;
    return true;    
}

// Time: O(n^0.5), Optimized approach
bool isPrimeOptimized(int n)
{
    if(n == 1)
        return false;
    for(int i = 2; i*i <= n; i++)
        if(n%i == 0)
            return false;
    return true;
}

// Almost three times faster than the optimized approach 
bool isPrimeMoreOptimized(int n)
{
    if(n == 1)
        return false;
    if(n == 2 || n == 3)
        return true;
    if(n%2 == 0 || n%3 == 0)
        return false;
    for(int i = 5; i*i <= n; i+=6)
        if(n%i == 0 || n%(i+2) == 0)
            return false;
    return true;
}