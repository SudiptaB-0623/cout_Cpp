#include<bits/stdc++.h>

using namespace std;

void merge(int arr[], int l, int m, int r)              //function to merge the broken halves
{
    //Creating two arrays m1, m2 of size a, b respectively to store the elements of each half in it

    int a = m-l+1;
    int b = r-m;

    int m1[a], m2[b];

    for(int i=0;i<a;i++)
    {
        m1[i]=arr[l+i];
    }
    for(int i=0;i<b;i++)
    {
        m2[i]=arr[m+1+i];
    }

    //Comparing the arrays m1, m2 and merging them in sorted order

    for(int i=0,j=0,k=0;(i<a)||(j<b);)
    {
        if(i>=a)                            //if m1 runs out of element, just keep adding elements from m2
        {            
            arr[l+k]=m2[j];
            j++;
            k++;
            continue;
        }
        if(j>=b)                            //if m2 runs out of element, just keep adding elements from m1
        {
            arr[l+k]=m1[i];
            i++;
            k++;
            continue;
        }

        //Compare and merge elements accordingly

        if(m1[i]<m2[j])
        {
            arr[l+k]=m1[i];
            i++;
        }
        else
        {
            arr[l+k]=m2[j];
            j++;
        }
        k++;
    }
}

void mergesort(int arr[], int left, int right)
{    
    if(left<right)                              
    {                                           
        int mid = (left+right)/2;

        mergesort(arr,left,mid);                //Left half of the broken array part
        mergesort(arr,mid+1,right);             //Right half of the broken array part
        merge(arr,left,mid,right);              //Merging the broken halfs in sorted order
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

    mergesort(arr,0,n-1);                       // Merge Sort 
    
    for(int i=0;i<n;i++)                        //Output Elements
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
