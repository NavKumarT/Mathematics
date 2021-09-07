#include<iostream>
using namespace std;

bool isPalindrome(int n);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The given number is a palindrome: " << boolalpha << isPalindrome(n) << " \n";
    return 0;
}

// Time: O(d), For non-negative inputs, Observe the usage of 'boolalpha' 
bool isPalindrome(int n)
{
    int temp = n;
    int rev = 0;
    int ld;
    while(temp > 0)
    {
        ld = temp % 10;
        rev = rev * 10 + ld;
        temp /= 10;
    }
    return (n == rev);
}

