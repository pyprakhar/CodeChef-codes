#include<bits/stdc++.h>
using namespace std;

    double powr(double x, int n) 
    {
        if(n==0) return 1;
        double y=powr(x,n/2);
        if(n%2==0) return y*y;
        if(n<0)
        {
            return 1/x*y*y;
        }
        return x*y*y;
    }
int main()
{
  double x; cin>>x;
  int n; cin>>n;
  cout<<powr(x,n)<<endl;
  return 0;
}
