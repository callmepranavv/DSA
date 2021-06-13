#include<iostream>
using namespace std;

bool IsSorted(int arr[] , int n)
{
	for(int i=1 ; i < n ;i++)
		if(arr[i] < arr[i-1])
			return false;

	return true;
}





int main()
{
	int n;
	cout<<"Enter the size of Array\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the Values in Array\n";
	for(int i = 0 ; i < n ; i++)
		cin>>arr[i];
	cout<<IsSorted(arr,n)<<endl;
	return 0;
}