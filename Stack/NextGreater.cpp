#include <bits/stdc++.h>
using namespace std;

void NextGreater(int arr[],int n){
    
    stack<int> s ;
    s.push(arr[n-1]);
    cout<<-1<<" ";
    
    for(int i=n-2;i>=0;i--)
    {
        while(s.empty()==false && s.top()<=arr[i]){
            s.pop();
        }
        int ng = (s.empty()) ? -1 : s.top();
        cout<<ng<<" ";
        s.push(arr[i]);
    }
}

int main() 
{ 
    int arr[]={5,15,10,8,6,12,9,18};
    int n=8;
    NextGreater(arr,n);
    return 0; 
}
