#include<bits/stdc++.h>

using namespace std;

//partition function is to put elements less than the pivot to its left and elements greater than the element to the 
//pivots right and finding the permanent position of the pivot

int partition(int arr[], int left, int right)         
{
    int i = left - 1;
    int pivot = arr[right];

    for(int j=left ;j<right;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[right]);

    return (i+1);
}

void quicksort(int arr[], int low, int high)               //quick sort with right-most element as pivot     
{
    if(low<high)
    {
        int p = partition(arr, low, high);                 //integer p is the permanent position/index of the pivot

        //Again quick sorting the left half and right half of the pivot elements, after positioning the pivot at 
        // its permanent position

        quicksort(arr, low, p-1);
        quicksort(arr, p+1, high);
    }
}

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

    quicksort(arr,0,n-1);                       // Quick Sort 
    
    for(int i=0;i<n;i++)                        //Output Elements
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}