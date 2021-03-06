#include<bits/stdc++.h>
using namespace std;
int main()
{
        int in_yr;
        cin>>in_yr;
        int d1,d2,d3,d4;
        while(1)
        {
               in_yr+=1;
               d1=in_yr/1000;
               d2=(in_yr/100)%10;
               d3=(in_yr/10)%10;
               d4=in_yr%10;
               
               if(d1!=d2 && d1!=d3 && d1!=d4 && d2!=d3 && d2!=d4 && d3!=d4 && d4!=d1)
               {
                   break;
               }
      }
     
      cout<<in_yr<<endl;
      return 0;
      
}