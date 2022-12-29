/*
Write a program to merge two sorted arrays.
*/
#include <iostream>
using namespace std;

int main()
{
    int n,i,b[50],a,c,e[50],j,f[50],d;

    

   

    cout<<"enter the number of elements you want to insert in your 1st array (max:50):";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter the element to insert in your array:";
        cin>>a;
        b[i]=a;
    }
    cout<<"enter the number of elements you want to insert in your 2nd array (max:50):";
    cin>>c;
    for(i=0;i<c;i++)
    {
        cout<<"enter the element to insert in your array:";
        cin>>d;
        e[i]=d;
    }


    //couting 1st array before sorting
    cout<<"\n1st array:";
    for(i=0;i<n;i++)
    {
        cout<<b[i];
    }
    //coting 2nd array before sorting
    cout<<"\n2nd array:";
    for(i=0;i<c;i++)
    {
        cout<<e[i];
    }

    //merging
    i=0;
    while(i<n+c)
    {
        for(j=0;j<n;j++)
        {
            f[i]=b[j];
            i++;
        }
        for(j=0;j<c;j++)
        {
            f[i]=e[j];
            i++;
        }
    }
    //couting merged array
    cout<<"\nmerged array:";
    for(i=0;i<n+c;i++)
    {
        cout<<f[i];
    }
}