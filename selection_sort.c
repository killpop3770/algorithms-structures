#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int selection_sort(int *arr, int len);

int main()
{

	printf(" _____        _              _    _                        _____               _   \n");
	printf("/  ___|      | |            | |  (_)                      /  ___|             | |  \n");
	printf("\\ `--.   ___ | |  ___   ___ | |_  _   ___   _ __          \\ `--.   ___   _ __ | |_ \n");
	printf(" `--. \\ / _ \\| | / _ \\ / __|| __|| | / _ \\ | '_ \\          `--. \\ / _ \\ | '__|| __|\n");
	printf("/\\__/ /|  __/| ||  __/| (__ | |_ | || (_) || | | |        /\\__/ /| (_) || |   | |_ \n");
	printf("\\____/  \\___||_| \\___| \\___| \\__||_| \\___/ |_| |_|        \\____/  \\___/ |_|    \\__|\n");
	printf("                                                   ______                          \n");
	printf("                                                  |______|                            \n");   

	int len;
	printf("%s\n", "Input length of array:");
	scanf("%d", &len);

	int *arr;
	arr = (int*)malloc((len-1)*sizeof(int));
	printf("%s\n", "Input array values:");
	for (int i=0; i<len; i++)
		scanf("%d",&arr[i]);

	selection_sort(arr, len);
	
	free(arr);

	return 0;
}

int selection_sort(int *arr, int len)
{
	clock_t start, stop;
    start = clock ();

	int temp, min;

	for (int i=0; i<len; i++)
	{
		min = i;

		for (int j=i; j<len; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}

		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;	

	}

	stop = clock();
	for (int i=0; i<len; i++)printf("%d ", arr[i]);printf("\n");
	printf("\nSelection sort required %.4f seconds\n", (float)(stop - start)/1000);

	return 0;
}