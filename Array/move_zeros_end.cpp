#include <bits/stdc++.h>
using namespace std;

int move_zeros(int arr[] , int n)
{
  int count = 0;
  for(int i=0;i<n;i++){
    if(arr[i]!=0)
    {
      swap(arr[i],arr[count]);
      count++;
    }
  }


  for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
  cout<<endl;
  
  return 0;
}

int main()
{
  int n;
  cout << "Enter N value"<<endl;
  cin >> n;
  int a[n];
  cout << "Enter values in array"<<endl;
  
  for(int i=0;i<n;i++)
      cin>>a[i];
  cout<<endl;

  for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
  cout<<endl;
  
  move_zeros(a,n);
  return 0;
}
