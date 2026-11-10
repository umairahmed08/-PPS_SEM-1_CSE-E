#include <stdio.h>
int main()
{
int arr[100], N, i, sum = 0;
printf("Enter the size of N elements: ");
scanf("%d", &N);
printf("Enter %d values into array:\n", N);
for (i = 0; i < N; i++)
{
scanf("%d", &arr[i]);
sum = sum + arr[i];
}
printf("Sum of array elements = %d", sum);
return 0;
}
