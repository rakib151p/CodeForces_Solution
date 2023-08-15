#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>&v,int x)
{
    int l=0,r=v.size()-1,mid=(l+r)/2;
    while(l<=r)
    {
        if(v[mid]==x)
        {
            return mid;
        }
        else if(v[mid]<x)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
        mid=(l+r)/2;
    }
    return -1;
}
int sqrte(int n)
{
    int l=0,r=n,mid=(l+r)/2;
    while(l-r==0)
    {
        if((mid*mid)==n)
        {
            return mid;
        }
        else if((mid*mid)<n)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
        mid=(l+r)/2;
        cout<<mid<<" ";
    }
}
int lowerBound(vector<int>&v,int n)
{
    int l=0,h=v.size()-1,mid=(l+h)/2;
    while(l<h)
    {
        if(v[mid]<n)
        {
            l=mid+1;
        }
        else
        {
            h=mid;
        }
        mid=(l+h)/2;
    }
    if(v[mid]>=n)return mid;
    return -1;
}
int upperBound(vector<int>&v,int n)
{
    int l=0,h=v.size()-1,mid=(l+h)/2;
    while(l<=h)
    {
        if(v[mid]>=n)
        {
            h=mid;
        }
        else
        {
            l=mid+1;
        }
        mid=(l+h)/2;
    }
    if(v[mid]==n)return l;
    return -1;
}
int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cin>>x;
    cout<<lowerBound(v,x);
}
