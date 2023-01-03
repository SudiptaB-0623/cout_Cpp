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
    for(int i=0;i<n;i++)                        //Input Elements
    {
        cin>>arr[i];
    }

    for(int i=1;i<n;i++)                        // Insertion Sort
    {
        for(int j=i-1,k=i;j>=0;j--,k--)
        {
            if(arr[j]>arr[k])
                swap(arr[j],arr[k]);
            else
                break;
        }
    }

    for(int i=0;i<n;i++)                        //Output Elements
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
