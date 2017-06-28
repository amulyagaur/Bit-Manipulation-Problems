    //https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/monk-and-his-friend/
    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin>>t;
        for(int v=1;v<=t;v++)
        {
           unsigned long long n,m,x,y;
            cin>>n>>m;
            x = n^m;
            bitset<64> b(x);
            cout<<b.count()<<endl;
        }
        return 0;
    }
