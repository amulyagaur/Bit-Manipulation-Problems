//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/unit-existence/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      long long a[n],res=0;
      for(int i=0;i<n;i++)
      {
      	cin>>a[i];
      	res = res^a[i];
      }
      if(res==0)
      	cout<<-1<<endl;
      else
      	cout<<res<<endl;
    }
    return 0;
}
