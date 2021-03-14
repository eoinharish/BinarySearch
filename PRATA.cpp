#include<bits/stdc++.h>
using namespace std;

bool isPossible(int cook[],int n,int p,int mx)
{
    int count=0;

    for(int i=0;i<n;i++)
    {
        int t=0;
        int next_time=cook[i];
        while(t+next_time<=mx)
        {
            count++;
            t+=next_time;
            next_time+=cook[i];
            if(count>=p)
                return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p;    //no of pratas
        cin>>p;
        int n;cin>>n;    //no of cooks
        int cook[n];
        //rating arr of each cook
        for(int i=0;i<n;i++)
        {
            cin>>cook[i];
        }
        sort(cook,cook+n);
        int low=0;
        int high=cook[n-1]*(p*(p+1))/2;   //max time taken......if max_rating_cook cooks all pratas
        int ans=-1,mid;

        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(isPossible(cook,n,p,mid)==true){
                ans=mid;
                high=mid-1;                            //if possible then we try to minimise the time
            }
            else{
                low=mid+1;
            }
        }
        cout<<ans<<endl;
    }
}