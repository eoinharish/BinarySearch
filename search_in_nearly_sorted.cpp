#include<bits/stdc++.h>
using namespace std;

int bs(int a[],int low,int high,int target)
{
    if(low<=high)
    {
        int mid=low+(high-low)/2;
        if(a[mid]==target)
            return mid;
        if(mid>low && a[mid-1]==target)
            return mid-1;
        if(mid<high && a[mid+1]==target)
            return mid+1;
        else if(target>a[mid])
            return bs(a,mid+2,high,target);
        else
            return bs(a,low,mid-1,target);
        
    }
    return -1;
}
int main()
{
    int a[]={10, 3, 40, 20, 50, 80, 70};
    int n=sizeof(a)/sizeof(a[0]);
    int k=40;
    int ans=bs(a,0,n-1,k);
    cout<<ans;


}