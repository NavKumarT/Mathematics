#include<iostream>
using namespace std;

int factorial(int n);
int factorial2(int n);

int main()
{
    int n, answer;
    cout << "Enter the number: ";
    cin >> n;
    answer = factorial(n);
    cout << "The factorial of the " << n << " is: " << answer;
    return 0;
}

// Time: O(n), For moderately large values use long long 
// Use linked list or array implementation for large expected values 
int factorial(int n)
{
    int answer = 1;
    for(int i = 2; i <= n; i++)
        answer *= i;
    return answer;
}

// Recursive solution, Time: O(n), Space: O(n), Doesnt handle large values of factorial
int factorial2(int n)
{
    if(n == 0)
        return 1;
    return n * factorial2(n-1);
}