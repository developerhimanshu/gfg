#include <bits/stdc++.h>
using namespace std;

void GenerateSubsets(string &str, string curr , int index)
{
    if(index==str.length())
    {
        cout<<curr<<" ";
        return;
    }
    GenerateSubsets(str, curr, index+1);
    GenerateSubsets(str, curr+str[index], index+1);
}
int main()
{
    string s="ABC";
    GenerateSubsets(s, " ", 0);
    return 0;
}