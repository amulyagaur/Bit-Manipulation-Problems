// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/hihi-and-crazy-bits/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long num,i;
        cin>>num;
        for(i=0;i<32;i++)
        {
            if(!(num & (1<<i)))
            break;
        }
        //set the i'th bit
        num = num|(1<<i);
        cout<<num<<endl;
    }
    return 0;
}
