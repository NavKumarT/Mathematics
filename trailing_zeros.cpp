#include<iostream>
using namespace std;

int trailingZeroes(int n);
int trailingZeroes2(int n);

int main()
{
    int n, answer;
    cout << "Enter a number: ";
    cin >> n;
    answer = trailingZeroes2(n);
    cout << "The number of trailing zeroes in " << n << " are " << answer;
    return 0;
}

// Naive approach, Causes integer overflow for large factorials 
// Time: O(n)
int trailingZeroes(int n)
{
    int temp = n;
    int answer = 1;
    for(int i = 2; i <= n; i++)
        answer *= i;
    int zeroes = 0;
    while(answer>0)
    {   
        if(answer%10 == 0)
            zeroes++;
        answer /= 10;
    }
    return zeroes;
}

// Time: O(logn), Can handle large values of factorials
int trailingZeroes2(int n)
{
    int res = 0;
    for(int i = 5; i <= n ; i *= 5)
        res += n/i;
    return res;
}

