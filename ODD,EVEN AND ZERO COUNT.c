#include <stdio.h>

void countdata()
{
    int n, number;
    int evenCount = 0, oddCount = 0, zeroCount = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number);

        if (number == 0)
            zeroCount++;
        else if (number % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);
    printf("Zeroes: %d\n", zeroCount);
}

int main()
{
    countdata();
    return 0;
}
