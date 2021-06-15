#include <bits/stdc++.h>

using namespace std;

int leader(int arr[] , int n)
{
        int curr_ldr = arr[n-1];
        cout<<curr_ldr<<" ";

        for(int i = n-2;i>=0;i--)
        {
          
          if(curr_ldr < arr[i])
          {
              curr_ldr = arr[i];
              cout<<curr_ldr<<" ";
          }

        }

        
        return 0;
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
  
  leader(a,n);
  return 0;
}
