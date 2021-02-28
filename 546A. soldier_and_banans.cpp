#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{

          int k,w,ans=0;
          cin>>k;
           int n;
          cin>>n;
          cin>>w;
          for(int i=1;i<=w;i++)
          {
              ans+=i*k;
          }
          if((ans-n)>=1)
          cout<<(ans-n)<<endl;
          else{
              ans=0;
              cout<<ans<<endl;
          }
          return 0;
          

          
}

