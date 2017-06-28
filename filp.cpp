//https://www.hackerrank.com/challenges/flipping-bits
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    for(int v=1;v<=t;v++)
        {
        unsigned n ;
        cin>>n;
        cout<<~n<<endl;
    }
    return 0;
}
