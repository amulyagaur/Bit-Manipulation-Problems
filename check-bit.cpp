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
		if(n & 1<<2)
		cout<<"2nd bit is set"<<endl;
		else
		cout<<"2nd bit is not set"<<endl;
	}
	return 0;
}
