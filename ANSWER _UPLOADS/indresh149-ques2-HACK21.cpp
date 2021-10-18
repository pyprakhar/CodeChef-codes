#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    if(a >= b && a >= c)
        {
        if(b >= c)
        {
            cout<<b<<endl<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
        }
        
        else if(b >= a && b >= c)
    {
        if(a >= c)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }
    
    else if(a >= b)
    {
       cout<<a<<endl;
    }
    else
    {
       cout<<b<<endl;
    }
        
	}
        
	return 0;
}
