#include<bits/stdc++.h>
using namespace std;
int checkValidate(string s,int a,int b,int c)
{
         int ans=0;
         for(int i=0;i<s.size();i++)
         {
               if(s[i]=='A')
               {
                   ans+=a;
               }
               if(s[i]=='B')
                  ans+=b;
               if(s[i]=='C')
                   ans+=c;
               if(ans<0)
               {
                   return 0;
               }       
         }
        return (ans==0);
}
int main()
{
        int test;
        cin>>test;
        string s;
        while(test-->0)
        {
               cin>>s;
               int check=0;
               int arr[]={-1,1};
               for(int i=0;i<2;i++)
               {
                   for(int j=0;j<2;j++)
                   {
                       for(int k=0;k<2;k++)
                       {
                           check=check || checkValidate(s,arr[i],arr[j],arr[k]);
                       }
                   }
               }
               if(check)
               {
                   cout<<"YES"<<endl;
               }else cout<<"NO"<<endl;
              

        }
        return 0;
     
}