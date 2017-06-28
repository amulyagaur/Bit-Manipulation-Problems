//https://codebuddy.co.in/problems/MINSUB
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
      int n,sum_t=0;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        sum_t += a[i];
      }
      int diff = INT_MAX;
      for(int i=1;i<pow(2,n);i++)
      {int sum=0;
        for(int j=0;j<n;j++)
        {
          if(i & 1<<j)
          sum+=a[j];
        }
        int s1 = sum;
        int s2 = abs(sum_t-sum);
        diff = min(diff,abs(s1-s2));
      }
      cout<<diff<<endl;
    }
    return 0;
}
