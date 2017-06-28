//https://www.hackerrank.com/challenges/maximizing-xor
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int l,r,i,j,max=0,d;
    cin>>l>>r;
    for(i=l;i<=r;i++)
        {
        for(j=i+1;j<=r;j++)
            {
            d=i^j;
            if(d>max)
                max=d;
        }
    }
    cout<<max;
    return 0;
}
