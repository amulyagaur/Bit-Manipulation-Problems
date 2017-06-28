// https://codebuddy.co.in/problems/SABRINA
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool isPalindrome(string x)
{
  for(int i=0;i<x.size()/2;i++)
  if(x[i]!=x[x.size()-1-i])
  return false;
  
  return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      string x;
      cin>>x;
      int cou=0;
      for(int i = 1;i<pow(2,x.size());i++)
      {string y ="";
        for(int j=0;j<x.size();j++)
        {
          if(i & 1<<j)
          y.push_back(x[j]);
        }
        
        
        if(isPalindrome(y))
        cou++;
      }
      cout<<cou+1<<endl;
    }
    return 0;
}
