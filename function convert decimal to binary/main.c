#include <stdio.h>


void decimalToBinary(int decimal_number)
{
    int binary_number[32];

    int i=0,j=0;
    while (decimal_number > 0)
        {
        binary_number[i] = decimal_number % 2;
        decimal_number = decimal_number / 2;
        i++;
    }


    for ( j = i - 1; j >= 0; j--)
        printf("%d", binary_number[j]);

}

int main()
{
    int decimal_number;
    printf("enter decimal number: ");
    scanf("%d",&decimal_number);
    printf("binary number: ");
    decimalToBinary(decimal_number);

    return 0;
}
