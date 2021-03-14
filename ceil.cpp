#include<bits/stdc++.h>
using namespace std;


//find the index of the ceil of a given element
int main()
{
    int a[]={1,2,3,4,8,10,10,12,19};
    int n=sizeof(a)/sizeof(a[0]);
    int k=-15;

    int low=0;
    int high=n-1;
    int flag=0;
    int ans;

    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(a[mid]==k){
            flag=1;
            ans=mid;
            break;
        }
        else if(a[mid]<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(flag==1){
        cout<<ans;
    }
    else if(low==n){
        cout<<-1;
    }
    else{
        cout<<low;
    }
}