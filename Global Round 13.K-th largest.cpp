#include<bits/stdc++.h>
using namespace std;
int main()
{

        int n,q;
        cin>>n>>q;
        int arr[n];
        int ones=0,zeros=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i])
            {
                ones++;
            }//else zeros++;
        }
        int t,v;
        while (q-->0)
        {
            
            cin>>t>>v;
            if(t==1)
            {
                v--;
                if(arr[v])
                {
                    ones--;
                   // zeros++;
                }
                else{
                   // zeros--;
                    ones++;
                }
                arr[v]=1-arr[v];
            }else 
            {
                if(ones>=v)
                {
                    cout<<"1"<<endl;
                }else cout<<"0"<<endl;
            }
        }
        return 0;
        
}