#include <bits/stdc++.h>

using namespace std;

int stock(int price[] , int n)
{
        int profit  = 0;

        for(int i =0 ; i<n ; i++)
            if(price[i] > price[i-1])
                  profit+=(price[i] - price[i-1]);
        
        return profit;
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
  
  cout<<stock(a,n);
  
  return 0;
}
