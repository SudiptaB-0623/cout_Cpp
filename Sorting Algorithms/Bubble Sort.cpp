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

    for(int i=0;i<n;i++)                        //Bubble sorting
    {
        int flag = 0;
        for(int j=1;j<n;j++)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
                flag++;
            }
        }
        if(flag==0)
            break;
    }

    for(int i=0;i<n;i++)                        //Output Elements
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
