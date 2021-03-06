#include<bits/stdc++.h>
using namespace std;
int main()
{
            int n;
            cin>>n;
            int in,exit;
            int min1=INT_MIN,t=0;
            while(n-->0)
            {
                cin>>exit>>in;
                t=(t-exit)+in;

                if(t>min1)
                {
                    min1=t;
                }
                
            }

            cout<<min1<<endl;
            return 0;
           
}