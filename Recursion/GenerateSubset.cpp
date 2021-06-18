#include <bits/stdc++.h>
using namespace std;

void printSubsets(string str, string curr, int index)
{
	if(index == str.length())
	{
		cout<<curr<<" ";
		return;
	}

	printSubsets(str, curr, index + 1);
	printSubsets(str, curr+str[index], index + 1);
}
	
int main() {
	
	string str = "ABC";
    	
    printSubsets(str, "", 0);
	
	return 0;
}
