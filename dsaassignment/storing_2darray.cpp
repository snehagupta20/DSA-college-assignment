/*
Write a program to store the marks obtained by 10 students in 5
courses in a two-dimensional array.
*/
#include <iostream>
using namespace std;
int main()
{
    int a=10,b=5,i,arr[10][5],j;
    for(i=0;i<10;i++)
    {
        
        for(j=0;j<5;j++)
        {
            cout<<"enter the marks of student "<<i+1<<":";
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<10;i++)
    {
        cout<<"student"<<i+1<<": ";
        for(j=0;j<5;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}