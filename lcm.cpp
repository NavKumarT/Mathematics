#include<iostream>
using namespace std;

int gcd(int a, int b);
int lcmBasic(int a, int b);
int lcmOptimized(int a, int b);

int main()
{
    int a, b, answer;
    cout << "Enter a number a : ";
    cin >> a;
    cout << "Enter a number b : ";
    cin >> b;
    answer = lcmOptimized(a, b);
    cout << "The gcd of a and b is " << answer;
    return 0;

}

// Time: O(a*b - max(a,b)), Naive approach 
int lcmBasic(int a, int b)
{
    int res = max(a, b);
    while(true)
    {
        if((res%a == 0) && (res%b == 0))
            break;
        res++;
    }
    return res;
}

// Efficient approach: a*b = gcd(a,b) * lcm(a,b)
// Time: log(min(a, b))

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a%b);
}

int lcmOptimized(int a, int b)
{
    return (a*b)/gcd(a, b);
}