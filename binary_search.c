#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binary_search(int *arr, int target, int len);
int simple_search(int *arr, int target, int len);


int main()
{
    int len;
    int *arr;
    int target;

    printf("Hello, it's Binary Search!\n");
    printf("Input length of your array:\n");
    scanf("%d",&len);

    printf("\nYour array:\n");
    arr = (int*)malloc(len * sizeof(int));
    //printf("Memory: %ld bytes",sizeof(len));
    for(int i=0; i<len; i++)
    {
        arr[i]=i;
        printf("%d ",i);
    }

    printf("\n\nInput target value:\n");
    scanf("%d",&target);

    binary_search(arr, target, len);
    simple_search(arr, target, len);
    free(arr);

    return 0;
}

int simple_search(int *arr, int target, int len)
{
    clock_t start, stop;
    start = clock ();
    int count = 0;
    for(int i=0; i<len; i++)
    { 
        if(arr[i]==target)
        {
            stop = clock();
            printf("\nSimple search number of steps: %d",count);
            printf("\nSimple search required %.4f seconds\n", (float)(stop - start)/1000);
        }
        count++;
    }

    return 0;
}

int binary_search(int *arr, int target, int len)
{
    clock_t start, stop;
    start = clock ();
    int low = 0;
    int high = len;
    int mid, try;
    int count = 0;

    while (low <= high)
    {
        mid = (int)(low+high)/2;
        
        try = arr[mid];

        if (try == target)
        {
            stop = clock();
            printf("==========================================");
            printf("\nBinary search number of steps: %d",count);
            printf("\nBinary search required %.4f seconds\n", (float)(stop - start)/1000);
            break;
        }

        if (try < target)
        {
            low = mid;
        }

        else
        {
            high = mid;
        }
        count++;
    }

    return 0;
}