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
    int *current, *current_min;
    current = array;
    current_min = current;
    for(int i=0, i<n; i++)
    {
        current = current + i;
        for(int x=1; x<n-1; x++)
        {
            
            else
            {
                if(*current_min > *(current+x))
                {
                    current_min = current + x;
                }   
            }

        }

        if(current != current_min)
        {
            // in this place i need to swap the current with min 
        }

    }
}

void display(int *ptr)
{
    printf("Started printing the sorted array \n");
    for(int i=0; i<10; i++)
    {
        printf("%d --> ",*(ptr+i));
    }
}

int main(void)
{
    int arr1[] = {42, 7, 19, 73, 4, 88, 15, 63, 29, 50};
    int *ptr = arr1;
    ptr = bubble_sort(arr1,10);
    display(ptr);
    return 0;
}