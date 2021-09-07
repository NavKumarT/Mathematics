#include<iostream>
using namespace std;

int gcd(int a, int b);
int gcdEuclidBasic(int a, int b);
int gcdEuclidOptimized(int a, int b);

int main()
{
    int a, b, answer;
    cout << "Enter a number a : ";
    cin >> a;
    cout << "Enter a number b : ";
    cin >> b;
    answer = gcd(a, b);
    cout << "The gcd of a and b is " << answer;
    return 0;
}

// Time: O(min(a,b))
int gcd(int a, int b)
{
    int minimum = min(a, b);
    while(minimum > 0)
    {
        if((a%minimum == 0) && (b%minimum == 0))
            break;
        minimum--;
    }
    return minimum;
}

// Using the Euclidean Algorithm for a better time complexity
// gcd(a, b) = gcd(a-b, a)

// Basic version
int gcdEuclidBasic(int a, int b)
{
    while(a != b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

// Optimized version, Time: O(log(min(a,b)))
int gcdEuclidOptimized(int a, int b)
{
    if(b == 0)
        return a;
    else
        return gcdEuclidOptimized(b, a%b);
}


