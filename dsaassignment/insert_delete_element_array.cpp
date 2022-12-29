/*
Write a program to insert one element in an array and delete an element from an array
*/
#include <iostream>
using namespace std;
int main()

{
    int n,i,a,b[50],c,d,e,f;
    cout<<"enter the number of elements you want to insert in your array (max:50):";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter the element to insert in your array:";
        cin>>a;
        b[i]=a;
    }
    cout<<"\n";
    cout<<"enter 1 if you want to insert an element from your array\n enter2 if you want to delete an element from your array:";
    cin>>c;
    if(c==1)
    {
        cout<<"enter the element you want to insert:";
        cin>>d;
        cout<<"enter the index number where you want to insert your element:";
        cin>>e;
        for(i=n;i>=0;i--)
        {
            b[i]=b[i-1];
            if(i-1==e)
            {
                b[i-1]=d;
                break;
            }
            
        }
        cout<<"new array:";
        for(i=0;i<=n;i++)
        {
            cout<<b[i];
        }
    }
    if(c==2)
    {
        b[n]=0;
        cout<<"enter the element you want to delete:";
        cin>>f;
        for(i=0;i<n;i++)
        {
            if(b[i]==f)
            {
                b[i]=b[i+1];
                f=b[i+1];
                if(f==b[n])
                {
                    break;
                }
            }
        }
        cout<<"\n"<<"new array:";
        for(i=0;i<n-1;i++)
        {
            cout<<b[i];
        }
    }
}