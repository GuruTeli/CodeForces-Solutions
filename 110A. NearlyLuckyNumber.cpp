#include<bits/stdc++.h>
using namespace std;
int main()
{

       long long int n;
       cin>>n;
       int cnt=0,cnt1=0,f1=0,f2=0;
       while(n)
       {
           if(n%10==4 || n%10==7)
           {
              
               cnt++;
               if(n%10==4)
               {
                   f1=1;
               }
               if(n%10==7)
               {
                   f2=1;
               }
               
          }
           n/=10;
           cnt1++;
       }
       if(((f1==1 && f2==1) && (cnt==4 || cnt==7)) ) 
       cout<<"YES"<<endl;
       else if(f2 && (cnt==4 || cnt==7))
       {
           cout<<"YES"<<endl;
       }
       else if(f1 && (cnt==4 || cnt==7))
       {
               cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;

       return 0;

}