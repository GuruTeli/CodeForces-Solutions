#include<bits/stdc++.h>
using namespace std;
int main()
{

        string s1,s2;
        cin>>s1;
        cin>>s2;
        int k=s2.size()-1,f=1;
        if(s1.size()!=s2.size())
        {
            cout<<"NO"<<endl;
        }else {
                  for(int i=0;i<s1.size();i++)
                  {
                          if(s2[k--]!=s1[i])
                          {
                              cout<<"NO"<<endl;
                              f=0;
                              break;
                        }
                 }
           if(f)
           {
               cout<<"YES"<<endl;
           }       
        }
                 
           
           return 0;

}