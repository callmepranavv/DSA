#include<iostream>
using namespace std;

int SecondLargest(int arr[] , int n)
{
	int largest = 0;
	int res = -1;

	for(int i = 1;i<n;i++)
	{
		if (arr[i] > arr[largest])
		{
			res = largest;
			largest = i;
		}

		else if (arr[i] != arr[largest])
		{
			if(res ==-1 || arr[i] > arr[res])
				res = i;
		}

	}

	return arr[res];
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
	
	cout<<"Second Largest Number in Array is:-"<< SecondLargest(arr,n);
	cout << endl;
	return 0;
}