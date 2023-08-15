#include <stdio.h>

int binarySearch(int array[], int x, int low, int high)
{
    if (high >= low)
    {
        int mid=low+(high-low)/2;

        if(array[mid]==x)
            return mid;
        else if(array[mid]>x)
            return binarySearch(array,x,low,mid-1);

        return binarySearch(array,x,mid+1,high);
    }

    else
        return -1;
}

int main()
{
    int array[] = {1,2,4,5,6,8,10};
    int n = sizeof(array)/sizeof(array[0]);

    int x;
    printf("Type here the number what you want to search:");
    scanf("%d",&x);

    int result = binarySearch(array, x, 0, n - 1);

    if(result == -1)
        printf("The element you typed was not found.");
    else
        printf("Element is found at index %d", result);
}
