#include <bits/stdc++.h>

using namespace std;

void func(int n)
{
	if(n==0)
		return;

	cout<<n<<" ";
	func(n-1);
}

int main()
{
	int m;
  	cout << "Enter a value"<<endl;
  	cin >> m;
  	func(m);

  	return 0;
}