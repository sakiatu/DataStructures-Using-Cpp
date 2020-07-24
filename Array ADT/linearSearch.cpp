#include<iostream>
int search(int arr[],int size,int key)
{
    for(int i = 0; i< size; i++)
    {
        if(arr[i]==key)
            return i;
    }
    return -1;
}

int main()
{
    int arr[9]= {1,2,3,4,5,14,6,17,8};

    std::cout<<search(arr,9,15);

    return 0;
}
