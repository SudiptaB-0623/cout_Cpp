//Time Complexity  : O(n^2)
//Space Complexity : O(1)

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements: ";
    for(int i=0;i<n;i++)                    //Input Array
    {
        cin>>arr[i];
    }

    cout<<"Output: \n";
    for(int i=0;i<n;i++)                    //Selection Sorting
    {         
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
                swap(arr[i],arr[j]);
        }
    }

    for(int i=0;i<n;i++)                    //Output Array
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
