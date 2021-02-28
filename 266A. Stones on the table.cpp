#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
       int n;
       cin>>n;
       string s;
       cin>>s;
      
       int count1=0;
      
       for(int i=1;i<n;i++)
       {
             if(s[i-1]==s[i])
             {
                 count1++;
             }
       }
       
                 cout<<count1<<endl;
       
       return 0;

}