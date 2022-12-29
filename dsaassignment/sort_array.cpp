/*
Write a program to sort an array
*/
#include <iostream>
using namespace std;
int main()
{
    int n,i,a,b[50],j,c;
    cout<<"enter the number of elements you want to insert in your array (max:50):";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter the element to insert in your array:";
        cin>>a;
        b[i]=a;
    }
    cout<<"\nold array:";
    for(i=0;i<n;i++)
    {
        cout<<b[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[j]>b[j+1])
            {
                c=b[j];
                b[j]=b[j+1];
                b[j+1]=c;
            }
        }
    }
    cout<<"\nnew array:";
    for(i=0;i<n;i++)
    {
        cout<<b[i];
    }

}