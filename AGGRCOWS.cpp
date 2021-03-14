#include<bits/stdc++.h>
using namespace std;

bool check(long long a[],int n,int c,long long  mn)
{
    int count=1;
    int last=a[0];    //first cow is fixed at 1                   a[] = [1,2,4,8,9]

    for(int i=1;i<n;i++)
    {
        if(a[i]-last >= mn){
            last=a[i];                       //sum=a[i] in book allocation
            count++;
        }
        if(count==c)
            return true;
    }
    return false;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;   //n->stalls   c->cows
        cin>>n>>c;
        long long a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long low=0;
        long long high=a[n-1]-a[0];    //max separation possible
        long long ans=-1;
        long long mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;               //mid is now the minimum separation.....we need to maximise it
            if(check(a,n,c,mid)==true){
                ans=mid;
                low=mid+1;

            }
            else{
                high=mid-1;
            }

        }
        cout<<ans<<endl;

    }
}