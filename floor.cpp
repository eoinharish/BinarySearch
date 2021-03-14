#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int low=0;
	    int high=n-1;
	    int flag=0;
	    int ans=-1;
	    while(low<=high)
	    {
	        int mid=low+(high-low)/2;
	        if(a[mid]==k){
	            ans=mid;
	            flag=1;
	            break;
	        }
	        else if(a[mid]>k){
	            high=mid-1;
	        }
	        else{
	            low=mid+1;
	        }
	    }
	    if(flag==1){
	        cout<<ans<<endl;
	    }
	    else if(high==-1){
	        cout<<-1<<endl;
	        
	    }
	    else if(low==n){
	        cout<<n-1<<endl;
	    }
	    else{
	        cout<<high<<endl;
	    }
	    
	    
	    
	}
	return 0;
}