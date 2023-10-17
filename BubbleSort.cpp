#include <iostream>
using namespace std;
 
 int main()
 {
    int n;
    cout<<"enter the number of element";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int temp=0;
    int counter=1;

    while(counter<n)
    {
    for(int i=0; i<n-counter; i++)
    {
      if(arr[i]>arr[i+1])
      {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
      }
    }
         counter++;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
     cout<<endl;
 }



