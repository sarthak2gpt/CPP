#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array :"<<endl;
    cin>>n;
    int a[n]={};
    cout<<"enter the elements of the array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int counter = 1;
    while(counter<n)
    {
        for(int i=0;i<(n-counter);i++) 
        {
            if(a[i]>a[i+1])
            {
                swap(a[i+1],a[i]);
            }
        }
        counter++;
    }
    
    cout<<"array after sorting is :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;


return 0;
}