// https://www.hackerrank.com/challenges/counter-game
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
        unsigned long long n,c,i;
        cin>>n;
        for(i=n,c=0;i>1;)
            {
            if(((i)&(i-1))==0)
                i=i/2;
            else
                i = i - (unsigned long long)pow(2,floor(log(i)/log(2)));
            
            c++;
        }
        
       //cout<<c;
        if(c%2==0)
            cout<<"Richard"<<endl;
        else
            cout<<"Louise"<<endl;
    }
    return 0;
}
