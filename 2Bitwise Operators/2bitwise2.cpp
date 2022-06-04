/*
#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout<<"Enter x and y: ";
    cin>>x>>y;
    float p= (x>>y); => Right shift operator
    cout<<p<<endl;
    return 0;
}
*/
#include <iostream>

using namespace std;

int main()
{
   int x, y;
    cout<<"Enter x and y: ";
    cin>>x>>y;
    float p= (x<<y); //=> Left shift operator
    cout<<p<<endl;
    return 0;

}
