#include<bits/stdc++.h>
// #include<stdio.h>
using namespace std;
int main()
{
         int test;
         cin>>test;
         int input;
         while(test-->0)
         {
                 cin>>input;
                 for(int i=0;i<input;i++)
                 {
                     cout<<((i+1)%input)+1<<" ";
                 }
                 cout<<endl;

         }     
}
