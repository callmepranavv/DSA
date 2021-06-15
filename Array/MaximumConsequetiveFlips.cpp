#include <bits/stdc++.h>

using namespace std;

int print_groups(bool arr[] , int n)
{
       for(int i=1;i<n;i++)
       {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
                  cout<<"From "<<i<<" to ";

            else
                  cout<<(i-1)<<endl;

        }
       }

       if(arr[n-1]!=arr[0])
            cout<<(n-1)<<endl;

        return 0;
}


int main()
{
  int n;
  cout << "Enter N value"<<endl;
  cin >> n;

  bool a[n];
  cout << "Enter values in array"<<endl;
  for(int i=0;i<n;i++)
      cin>>a[i];
  cout<<endl;

  for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
  cout<<endl;
  
  cout<<print_groups(a,n);
  
  return 0;
}
