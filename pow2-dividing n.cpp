// largest power of 2 which divides the given number is given by n*(-n)
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<(n & (-n))<<endl;
		
	}
	return 0;
}
