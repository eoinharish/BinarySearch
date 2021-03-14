#include<bits/stdc++.h>
using namespace std;

int bs(int a[],int low,int high,int k){
    if(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]==k)
            return mid;
        else if(a[mid]<k){
            return bs(a,mid+1,high,k);
        }
        else{
            return bs(a,low,mid-1,k);
        }
    }
    return -1;
}
int main()
{
    int a[9]={5,6,7,8,9,10,1,2,3};    //search 10
    int n=9;
    int k=10;
    int low=0;
    int high=n-1;
    int index,ans;
    while(low<=high){
        if(a[low]<a[high]){
            index=low;
            break;
        }
        int mid=low+(high-low)/2;
        int prev=(mid+n-1)%n;
        if(a[mid]<a[prev]){
            index=mid;
            break;
        }
        else if(a[mid]>a[low]){
            low=mid+1;
        }
        else if(a[mid]<a[high]){
            high=mid-1;
        }
    }
    if(k<=a[n-1] && k>=a[index]){
        ans=bs(a,index,n-1,k);
    }
    else if(index>0 && k>=a[0] && k<=a[index-1]){       //index>0 imp otherwise out of bound
        ans=bs(a,0,index-1,k);
    }
    else{
        ans=-1;
    }
    cout<<ans;
    
}
