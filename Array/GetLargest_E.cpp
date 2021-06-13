#include<iostream>
using namespace std;

int GetMinMax(int arr[] , int n)
{
	int res = 0,res1=0;

	for(int i = 1 ; i < n ; i++){
		if (arr[i] > arr[res])
			res = i;


		if (arr[i] < arr[res1])
			res1 = i;
	}

	cout<<"Largest Number is:->"<<arr[res]<<endl<<"Smallest Number is:->"<<arr[res1]<<endl;

	return 0;
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
	GetMinMax(arr,n);
	//cout<<"Smallest Number in Array is:-"<< GetSmallest(arr,n);
	//cout << endl;
	return 0;
}