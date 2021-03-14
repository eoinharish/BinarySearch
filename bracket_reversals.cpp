#include <bits/stdc++.h>
using namespace std;

int main() {
	string str="}{{}}{{{";
	int open_count=0,close_count=0;
	stack<char>s;
	for(int i=0;i<str.length();i++)
	{
	    if(str[i]=='{')
	        s.push(str[i]);
	    if(str[i]=='}' && s.empty())
	        s.push(str[i]);
	    if(str[i]=='}' && !s.empty() && str[i]!=s.top())
	        s.push(str[i]);
        if(str[i]=='}' && !s.empty() && s.top()==str[i])
            s.pop();
        
	            
	}
	while(!s.empty())
	{
	    if(s.top()=='{'){
	        open_count++;
	        s.pop();
	    }
	    else{
	        close_count++;
	        s.pop();
	    }
	}
	int ans=ceil(open_count/2)+ceil(close_count/2);
	cout<<ans<<endl;

	
	return 0;
}