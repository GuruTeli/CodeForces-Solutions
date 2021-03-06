#include<bits/stdc++.h>
using namespace std;
int main()
{

          string s;
          cin>>s;
          int u_c1=0,l_c1=0;
          for(int i=0;i<s.size();i++)
          {
              if(s[i]>='A' && s[i]<='Z')
              {
                  u_c1++;
              }else l_c1++;
          }
          if(u_c1>l_c1)
          {
              for(int i=0;i<s.size();i++)
              {
              s[i]=toupper(s[i]);
              }
              cout<<s<<endl;
              return 0;

          }
          else 
          {
              for(int i=0;i<s.size();i++)
              {
              s[i]=tolower(s[i]);
              }
              cout<<s<<endl;
              return 0;
          }
}
