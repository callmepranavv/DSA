#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[] , int n)
{
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(arr[j] < arr[i])
      {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }

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

  selection_sort(a,n);

  return 0;


}
