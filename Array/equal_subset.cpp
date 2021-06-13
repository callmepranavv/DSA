#include<bits/stdc++.h> 
using namespace std;

bool Partioning_equal_subsets(vector<int>& v,int n)
{
	int sum = 0;
	for(int i=0;i<n;i++)
		sum += v[i];

	if (sum%2)
		return 0;

	sum = sum/2;
	vector<bool> subset_possible(sum+1,false);
	subset_possible[0] = true;

	for(auto i :v){
		for(int j=sum;j>=i;j--)
		{
			subset_possible[j] = subset_possible[j] || subset_possible[j-i];
		}

	 }

	 return ~subset_possible[sum];
}

int main()
{
	int n;
	cin >> n;
  	vector<int> V;
  	for (int i = 0; i < n; i++) 
	{
		int input;
		cin >> input;
		V.push_back(input);
		
	}

	for (int i = 0; i < n; i++) 
	{
		cout << V[i] << " ";
	}
	cout<<endl;

	int ans = Partioning_equal_subsets(V,n);

	if(ans == 0)
		cout << "True";

	if(ans == 1)
		cout << "False";

	return 0;

}