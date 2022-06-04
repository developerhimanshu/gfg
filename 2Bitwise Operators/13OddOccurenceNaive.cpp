#include <iostream>

using namespace std;
int oddOccurrences(int n, int* arr)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count % 2 != 0)
        {
            return arr[i];
            break;
        }
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<oddOccurrences(n, arr);
    return 0;
}