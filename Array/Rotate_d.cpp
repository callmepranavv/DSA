#include <bits/stdc++.h>

using namespace std;

int rotate(int arr[] , int n , int d)
{
        //First reversing d elements from starting index.
        reverse(arr, arr+d);
        //Then reversing the last n-d elements.
        reverse(arr+d, arr+n);
        //Finally, reversing the whole array.
        reverse(arr, arr+n);

        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;

        return 0;
}


int main()
{
  int n,d;
  cout << "Enter N value"<<endl;
  cin >> n;

  cout << "Enter d value"<<endl;
  cin >> d;

  int a[n];
  cout << "Enter values in array"<<endl;
  for(int i=0;i<n;i++)
      cin>>a[i];
  cout<<endl;

  for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
  cout<<endl;
  
  rotate(a,n,d);
  return 0;
}
