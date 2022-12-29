/*
Input  : a[] = {1, 3, 4, 2, 6, 5, 8, 7}
Output : Mean = 4.5
         Median = 4.5
Sum of the elements is 1 + 3 + 4 + 2 + 6 + 
5 + 8 + 7 = 36
Mean = 36/8 = 4.5
Since number of elements are even, median
is average of 4th and 5th largest elements.
which means (4 + 5)/2 = 4.5
5-2
7-3
9-4
Input  : a[] = {4, 4, 4, 4, 4,4,4,4,4}
Output : Mean = 4
         Median = 4 
*/

#include <iostream>
using namespace std;
int main()
{
    int n,i,a[50],b;
    float mean;
    cout<<"enter the number of elements you want to add in your array";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter your elemnt:";
        cin>>b;
        a[i]=b;
        mean=mean+a[i];
    }
    mean=mean/2;
    if(n%2==0)
    {
        cout<<"even median: "<<(a[(n/2)-1]+a[n/2])/2 <<"\n";
    }
    else(n%2!=0);
    {
        cout<<n%2;
        cout<<"median: "<<a[(n-1)/2]<<"\n";
    }
    cout<<"\n"<<"mean:"<<mean;
}