#include <stdio.h>
#include <stdlib.h>

int *bubble_sort(int array[], int n)
{
    int *ptr = array;
    printf("This is the value of the first element in the array %d\n",*ptr);
    if (ptr == NULL)
    {
        printf("Array is empty, no values in it \n");
        return NULL;
    }

    for (int i=0; i<n; i++)
    {
        ptr = &array[0];
        for(int z=n-1; z>0; z--)
        {
            if( *ptr > *(ptr+1))
            {
                int temp;
                temp = *(ptr);
                *(ptr) = *(ptr+1);
                *(ptr+1) = temp;
            }
            ptr++;
        }
    }
    return array;
}


void selection_sort(int array[], int n)
{
    // i need to write code for selection sort here
    if (n==0)
    {
        printf("the array is empty, nothing to sort\n");
        return;
    }

    int *current, *min;
    
    for (int i=0; i<n-1; i++)
    {
        current = min = array + i;
        for(int z=i; z<n-1; z++)
        {
            current++;
            if(*min > *current)
            {
                min = current;
            }
        }
        if (*(array + i) > *min)
        {
            int temp = *(array+i);
            *(array+i) = *min;
            *min = temp;
        }

    }
}

// insertion sort, merge sort, quick sort
void display(int *ptr, int n)
{
    printf("Started printing the sorted array \n");
    for(int i=0; i<n; i++)
    {
        printf("%d --> ",*(ptr+i));
    }
}

int main(void)
{
    int arr1[] = {42, 7, 19, 73, 4, 88, 15, 63, 29, 50};
    int arr2[] = {5, 3, 8, 1, 9, 2};
    int *ptr = arr1;
    ptr = bubble_sort(arr1,10);
    display(ptr,10);
    selection_sort(arr2,6);
    display(arr2,6);

    return 0;
}