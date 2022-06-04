#include <bits/stdc++.h>
using namespace std;
class fib{
    public:
        int fibo(int n)
        {
            int s[n+2];
            s[0]=0;
            s[1]=1;

            for(int i=2; i<=n; i++)
            {
                s[i]=s[i-1]+s[i-2];
            }
            return s[n];
        }
};
int main()
{
    class fib f1;
    cout<<f1.fibo(9);
    return 0;
}