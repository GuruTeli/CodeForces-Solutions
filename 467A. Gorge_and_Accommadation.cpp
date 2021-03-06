#include <bits/stdc++.h>
using namespace std;
int main()
{
       int no_rooms,lives=0,capacity=0,count1=0;
       cin>>no_rooms;
       while(no_rooms-->0)
       {
           cin>>lives>>capacity;
           if(capacity-lives>=2)
           {
               count1++;
           }
       }
       cout<<count1<<endl;
       return 0;
}

