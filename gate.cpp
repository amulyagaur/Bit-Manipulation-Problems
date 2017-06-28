//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/the-castle-gate-july-easy/
    #include <iostream>
    using namespace std;
     
    int main()
    {
        int t;
        cin>>t;
        for(int v=1;v<=t;v++)
        {
        	int n,c=0;
        	cin>>n;
        	for(int i=1;i<=n;i++)
        	{
        		for(int j=i+1;j<=n;j++)
        		{
        			if((i^j)<=n)
        			c++;
        		}
        	}
        	cout<<c<<endl;
        }
        return 0;
    }
