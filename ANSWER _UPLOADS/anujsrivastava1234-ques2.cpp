#include<iostream>
using namespace std;
int main()
{
  int t,a,b,c;
  cin>>t;
  while(t--)
  {
    cin>>a>>b>>c;
     if((a>b && a>c && c>b) || (b>c && b>a && a<c))
     {
        cout<<c<<endl;
     }
     else if((b>c && b>a && a>c) || (c>b && c>a && a>b))
     {
      cout<<a<<endl;
     }
     else
     {
       cout<<b<<endl;
     }

     
  }
}
