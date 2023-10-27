# include<iostream>
# include<bits/stdc++.h>

using namespace std;

int upper_bound(int arr[],int n, int target)
{
    int low = 0, high = n - 1;
    while(low <= high )
    {
        int mid = (low + high) / 2;
        if(arr[mid] < target)
        {
            if(arr[mid+1] < target)
            {
                low = mid + 1;
            }
            else
            {
                return arr[mid];
            }

        }
        else if(arr[mid] > target)
        {
            if(arr[mid - 1] >= target)
            {
                high = mid - 1;
            }
            else
            {
                return arr[mid];
            }
        }
        else if (arr[mid] == target)
        {
            return arr[mid+1];
        }

    }

}

int main()
{
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    cout<<"Enter the elements in array:"<<endl;
    int arr[size];
    for(int i = 0; i < size ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Entered Values in array are : "<<endl;
    for(auto i : arr)
        cout<<i<<" ";
    cout<<endl;
    // using inbulid function to sort the array because binary search requires sorted array.
    sort(arr,arr+size);
    cout<<"Array after sorting:"<<endl;

    for(auto i : arr)
        cout<<i<<" ";
    int target;
    cout<<"\nEnter the value for Upper bound"<<endl;
    cin>>target;
    cout<<upper_bound(arr,size,target);
}