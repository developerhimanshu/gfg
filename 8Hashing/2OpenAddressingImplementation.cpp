#include <iostream>

using namespace std;
class MyHash
{
public:
    int *arr;
    int cap, size;

    MyHash(int c) { cap = c; 
    size = 0;
    arr=new int[cap];
    for (int i = 0; i < cap; i++)
        arr[i] = -1; // for assining the empty list
    }
    int hash(int key);
    bool search(int key);
    bool insert(int key);
    bool remove(int key);
};
int MyHash::hash(int key)
{
    return key % cap;
}
bool MyHash::search(int key)
{
    int h = hash(key);
    int i = h;
    while (i != -1)
    {
        if (arr[i] == key)
            return true;
        i = (i + 1) % cap;
        if (i == h)
        {
            return false;
        }
    }
    return false;
}

bool MyHash::insert(int key)
{
    int h = hash(key);
    int i=h;
    while (arr[i] != -1 && arr[i] != -2 && arr[i] != key)
        i = (i + 1) % cap;
    if (arr[i] == key)
        return false;
    else
    {
        arr[i] = key;
        size++;
        return true;
    }
    return false;
}

bool MyHash::remove(int key)
{
    int h = hash(key);
    int i = h;
    while (arr[i] != -1)
    {
        if (arr[i] == key)
        {
            arr[i] = -2;
            return true;
        }
        i = (i + 1) % cap;

        if (i == h)
            return false;
    }
    return false;
}
int main()
{
    MyHash M(7);
    M.insert(56);
    M.insert(45);
    M.insert(52);
    M.insert(55);
    if (M.search(56) == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    M.remove(56);
    if (M.search(56) == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}