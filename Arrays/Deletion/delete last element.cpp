#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int item;
    item=arr[n-1];
    
    
       
    
    
    cout<<"the resultant array is"<<endl;
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"the value deleted is:"<<" "<<item<<endl;
}
