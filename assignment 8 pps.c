#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\nBefore Swapping:\n");
    printf("First number = %d, Second number = %d\n", a, b);

    swap(&a, &b);

    printf("\nAfter Swapping:\n");
    printf("First number = %d, Second number = %d\n", a, b);

    return 0;
}