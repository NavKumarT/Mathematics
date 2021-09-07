#include<iostream>
#include<cmath>
using namespace std; 

int countDigits(int n);
int countDigits2(int n);

int main()
{
    int n, digits;
    cout << "Enter a number: ";
    cin >> n;
    digits = countDigits2(n);
    cout << "The digits in " << n << " are " << digits << " \n" ;
    return 0;
}

// Time: O(d), Space: O(1), Only takes positive input 
int countDigits(int n)
{
    int res = 0;
    while(n > 0)
    {
        res++;
        n /= 10;
    }
    return res;
}

// Time: O(1), Space: O(1), Only takes positive input, uses 'cmath' library
int countDigits2(int n)
{
    int answer;
    answer = int(log10(n)) + 1;
    return answer;
}