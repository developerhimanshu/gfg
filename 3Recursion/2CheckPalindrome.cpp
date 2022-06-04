#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str, int start, int end)
{
    if(start>end)
        return true;
    return (str[start]==str[end])&&isPalindrome(str, start+1, end-1);
}
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    int length= str.length();
    if(isPalindrome(str, 0, length-1))
        cout<<"String is Palindrome\n";
    else
        cout<<"String is not a Palindrome\n";
    return 0;
}