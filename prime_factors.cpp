#include<iostream>
using namespace std;

bool isPrime(int n);
void primeFactors(int n);


int main()
{

}


// Time: O(n^2log(n)), Basic approach 
void primeFactors(int n)
{
    if(n == 1)
        return; 
    for(int i = 2; i < n; i++)
        if(isPrime(i))
        {
            int x = i;
            while(n%x == 0)
            {
                cout << i;
                x = x * i;
            }            
        }
}

// Optimized approach 
void primeFactorsOptimized(int n)
{
    if(n == 1)
        return;
    for(int i = 2; i*i <= n; i++)
    {
        if(isPrime(i))
        {
            while(n%i == 0)
            {
                cout << i;
                n /= i;
            }
        }
    }
}

void primeFactorsMoreOptimized(int n)
{
    
}


// Efficient way to check for prime number 
bool isPrime(int n)
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