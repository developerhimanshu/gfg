#include <iostream>
using namespace std;

int partition(int arr[], int l, int h)
{
    int p = arr[h];
    int i = l - 1;

    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < p)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return i + 1;
}
void qsort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = partition(arr, l, h);
        qsort(arr, l, p - 1);
        qsort(arr, p + 1, h); // Here we are taking p-1 and p+1 because in lomuto partion the pivot element is fixed
    }
}
int main()
{
    int arr[] = {10, 34, 12, 54, 1};
    int l = 0, high = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, l, high - 1);
    for (int i = 0; i < high; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}