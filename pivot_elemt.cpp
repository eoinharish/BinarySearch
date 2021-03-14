#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[9]={5,6,7,8,9,10,1,2,3};    //pivot element is the minimum element in rotated sorted array,ie,1; (index=6)
    int n=9;
    int low=0;
    int high=n-1;
    int index;
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
    cout<<index;
}
