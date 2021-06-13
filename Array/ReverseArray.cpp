#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
	int low = 0,high = n-1;
	while(low < high)
	{
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		low++;
		high--;
	}

	for(int i=0 ; i<n ; i++)
		cout<<arr[i]<<" ";

	cout<<endl;
	

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
	reverse(arr,n);
	return 0;
}