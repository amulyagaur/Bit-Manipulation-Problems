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
		cout<<(n&(n-1))<<endl;
	}
	return 0;
}
////n&(n-1) is zero for a number which is a power of 2
