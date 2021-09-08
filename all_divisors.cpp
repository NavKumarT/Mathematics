#include<iostream>
using namespace std;

void divisors(int n);
void divisorsOptimized(int n);
void divisorsOptimizedIncreasing(int n);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    divisors(n);
    cout << "\n";
    divisorsOptimized(n);
    cout << "\n";
    divisorsOptimizedIncreasing(n);
    return 0;
}


// Time: O(n), Basic approach 
void divisors(int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(n%i == 0)
            cout << i << " ";
    }
}

// Time: O(n^0.5), Optimized approach, but the output is not in increasing order  
void divisorsOptimized(int n)
{
    for(int i = 1; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            cout << i << " ";
            if(i != n/i)
                cout << n/i << " ";
        }
    }
}

// Time: O(n^0.5), Optimized and prints in increasing order, duplicate might be present in the middle 
void divisorsOptimizedIncreasing(int n)
{
    int i;
    for(i = 1; i*i < n; i++) // inclusive of 1, exclusive of n^0.5
        if(n%i == 0)
            cout << i <<" ";
    for(; i >= 1; i--)       // inlusive of n^0.5, inclusive of 1
        if(n%i == 0)
            cout << n/i << " ";
}

