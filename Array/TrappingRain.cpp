#include <bits/stdc++.h>

using namespace std;

int get_water(int arr[] , int n)
{
        int res = 0;
        int lmax[n],rmax[n];

        lmax[0] = arr[0];
        for(int i =0 ; i<n ; i++)
              lmax[i] = max(arr[i],lmax[i-1]);

        rmax[n-1] = arr[n-1];
        for(int i =n-2 ; i>=0 ; i--)
              rmax[i] = max(arr[i],rmax[i+1]);

        for(int i=1 ; i<n-1 ; i++)
              res += (min(lmax[i],rmax[i])-arr[i]);

        return res;
}


int main()
{
  int n,d;
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
  
  cout<<get_water(a,n);
  
  return 0;
}
