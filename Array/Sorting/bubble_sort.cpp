#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[] , int n)
{
  int counter = 0;
  while(counter < n-1){
    for(int i=0;i<n-counter-1;i++){
      if(arr[i] > arr[i+1])
      {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
      }
    }
    counter++;
  }
  cout<<"After sorting"<<endl;
  for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
  cout<<endl;
}

int main()
{
  int n;
  int a[n];
  cout << "Enter N value"<<endl;
  cin >> n;
  cout << "Enter values in array"<<endl;
  for(int i=0;i<n;i++)
      cin>>a[i];

  cout<<"Before sorting"<<endl;
  for(int i=0;i<n;i++)
      cout<<a[i]<<" ";

  bubble_sort(a,n);

  return 0;


}
