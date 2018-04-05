#include <stdio.h>

void towerOfHanoi(int, char, char, char);

int main(void)
{
    int num;

    printf("> Input disk number: ");
    scanf("%d", &num);
    towerOfHanoi(num, 'A', 'C', 'B');
}

void towerOfHanoi(int n, char from_column, char to_column, char middle_column)
{
    if (n > 0)
    {
        if (n == 1)
        {
            printf("\n Move disk 1 from column %c to column %c", from_column, to_column);

            return;
        }

        towerOfHanoi(n - 1, from_column, middle_column, to_column);

        printf("\n Move disk %d from column %c to column %c", n, from_column, to_column);

        towerOfHanoi(n - 1, middle_column, to_column, from_column);
    }
}