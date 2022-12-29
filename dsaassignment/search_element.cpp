/*
Write a program to search for a number in an array.
*/
#include <iostream>
using namespace std;
int main()
{
    int n,i,a,b[50],c,d=0;
    cout<<"enter the number of elements you want to insert in your array (max:50):";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter the element to insert in your array:";
        cin>>a;
        b[i]=a;
    }
    cout<<"enter the element you want to search for:";
    cin>>c;
    for(i=0;i<n;i++)
    {
        if(b[i]==c)
        {
            cout<<"yes this element exists in the array at "<<i<<" index number.";
            d=1;
        }
    }
    if(d==0)
    {
        cout<<"this element does not exists";
    }
}