#include<bits/stdc++.h>
using namespace std;
int main()
{
         int noof_f;
         cin>>noof_f;
         int b[noof_f+1]={0};
         int val;
         for(int i=1;i<=noof_f;i++)
         {
             cin>>val;
             b[val]=i;
         }
         for(int i=1;i<=noof_f;i++)
         {
             cout<<b[i]<<" ";
         }
         cout<<endl;
         return 0;
} 