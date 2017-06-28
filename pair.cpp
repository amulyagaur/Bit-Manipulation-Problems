// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/sherlock-and-xor/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int v=1;v<=t;v++)
    {
        long long n,i,j,c=0,even=0,odd=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            even++;
            else
            odd++;
        }
        
long long z = even*odd;
        cout<<z<<endl;
    }
    return 0;
}
