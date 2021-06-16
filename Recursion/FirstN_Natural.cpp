#include <iostream>
using namespace std;


int getSum(int n)
{
	if(n == 0)
		return 0;

	return n + getSum(n - 1);

}

int main() {
	
	int m;
  	cout << "Enter a value"<<endl;
  	cin >> m;

	cout<<getSum(m);
	
	return 0;
}