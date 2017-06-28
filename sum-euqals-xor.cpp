//https://codebuddy.co.in/problems/SUMXOR
//https://www.hackerrank.com/challenges/sum-vs-xor
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
      long long n;
      cin>>n;
      int c=0;
      while(n)
      {
        if(n%2==0)
        c++;
        n = n/2;
      }
      cout<<(long long)pow(2,c)<<endl;
    }
    return 0;
}
