#include <bits/stdc++.h>
using namespace std;
int str_to_int(int str, int last)
{
    if(last==0)
    {
        return str[last]-'0';
    }

    int ans= str_to_int(str, last-1);
    int a= str[last]-'0';
    return ans*10+a;
}
int str_to_int(string str)
{
    int len=str.length();
    return str_to_int(str, len-1);
}
int main()
{
    string str= "1234";
    cout<<str_to_int(str);

}