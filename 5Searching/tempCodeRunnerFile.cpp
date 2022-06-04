int lastocc(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > key)
            high = mid - 1;
        else if (arr[mid] < key)
            low = mid + 1;
        else
        {
            if (mid== n-1 || arr[mid] != arr[mid +1])
                return mid;
            else
                return low= mid +1;
        }
    }
    return -1;
}
