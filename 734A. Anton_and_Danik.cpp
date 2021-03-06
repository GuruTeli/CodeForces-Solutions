#include<bits/stdc++.h>
using namespace std;
int main()
{
         int n,A_c=0;
         cin>>n;
         string s;
         cin>>s;
         for(int i=0;i<n;i++)
         {
               if(s[i]=='A')
                   A_c++;
         }
         if(A_c>(n-A_c))
         {
             cout<<"Anton"<<endl;
         }
         else if(A_c==(n-A_c))
         {
             cout<<"Friendship"<<endl;
         }else {
             cout<<"Danik"<<endl;
         }
         return 0;
       
}