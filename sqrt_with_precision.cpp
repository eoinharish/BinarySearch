#include<bits/stdc++.h>
using namespace std;

float squareRoot(int n,int p)
{
    int low=0;
    int high=n;
    float ans;
    int mid;

    //finding integral part in O(logn)
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(mid*mid==n)
            return mid;
        else if(mid*mid> n){
            high=mid-1;
        }
        else{
            ans=mid;
            low=mid+1;
        }
    }
    //finding decimal part in O(p)
    float inc=0.1;
    for(int i=0;i<p;i++)
    {
        while(ans*ans <= n)
        {
            ans+=inc;
        }
        ans=ans-inc;
        inc=inc/10;
    }
    return ans;
}

int main()
{
    cout<<squareRoot(49,3)<<endl;
    cout<<squareRoot(10,3)<<endl;
    cout<<squareRoot(2,3);
}