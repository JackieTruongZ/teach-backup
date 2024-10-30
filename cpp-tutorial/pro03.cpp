#include<iostream>

using namespace std;

int main() {

    int n ;
    cin >> n;
    int arr[n+10];
    int brr[1000]={0};
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (brr[arr[i]]==0)
        {
            count++;
        }
        
         brr[arr[i]] ++;
    }
    
    int max = brr[arr[0]];
  for (int i = 0; i < n; i++)
  {
    if (max < brr[arr[0]])
    {
        max = brr[arr[0]];
    }
    
  }
  cout<<count;
  
    

    
}

