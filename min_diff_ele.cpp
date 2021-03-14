#include<bits/stdc++.h>
using namespace std;

// Given a sorted array, find the element in the array which has minimum difference with the given number.
int main()
{
    int a[]={1,2,3,8,15};
    int n=sizeof(a)/sizeof(a[0]);
    int key=12;

    int low=0;
    int high=n-1;
    int ans,flag=0;
    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(a[mid]==key){
            ans=a[mid];
            flag=1;
            break;
        }
        else if(a[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(flag==1)
        cout<<ans;
    else{
        ans=abs(a[low]-key)>abs(a[high]-key)?a[high]:a[low];
        cout<<ans;
    }
}