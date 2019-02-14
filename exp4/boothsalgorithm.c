#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int convertBinaryToDecimal(int n);
int convertDecimalToBinary(int n);
int main()
{
    int p,n;
    while(1){
    printf("\nPress 1 to convert binary to decimal\n");
    printf("\nPress 2 to convert decimal to binary\n");
    scanf("%d",&p);
    switch(p)
    {
        case 1: printf("Enter a binary number: ");
                scanf("%d", &n);
                printf("%d in binary = %d in decimal", n, convertBinaryToDecimal(n));
                break;
        case 2: printf("Enter a decimal number: ");
                scanf("%d", &n);
                printf("%d in decimal = %d in binary", n, convertDecimalToBinary(n));
                break;
    }
}
	printf("print");
    return 0;
}

int convertBinaryToDecimal(int n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
int convertDecimalToBinary(int n)
{
    int binaryNumber = 0;
    int remainder, i = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
