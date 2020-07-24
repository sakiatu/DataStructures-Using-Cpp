#include<iostream>
int search(int arr[],int size,int key)
{
    int h =size-1;
    int l = 0;

    while(l<h)
    {
        int mid = l+h/2;
        if(arr[mid]==key)
            return mid;
        if(arr[mid]>key)
            l=mid+1;
        else
            h=mid-1;
    }
    return -1;

}

int main()
{
    // precondition: array should be sorted
    int arr[9]= {1,2,3,4,5,6,8,14,17};

    std::cout<<search(arr,9,5);

    return 0;
}

