#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int convertBinarytoOctal(int binaryNumber);
int convertOctalToBinary(int octalNumber);
int convertBinarytoHexadecimal(int n,char hex[]);
int main()
{
    int p,n;
    char hex[20];
    int binaryNumber;
    int octalNumber;
    while(1){
    printf("\nPress 1 to convert binary to octal\n");
    printf("\nPress 2 to convert octal to binary\n");
    printf("\nPress 3 to convert binary to hexadecimal\n");
    printf("\nPress 4 to convert hexadecimal to binary\n");

    scanf("%d",&p);
    switch(p)
    {
        case 1:
                printf("Enter a binary number: ");
                scanf("%d", &binaryNumber);
                printf("%d in binary = %d in octal", binaryNumber, convertBinarytoOctal(binaryNumber));
                break;
        case 2:
                printf("Enter an octal number: ");
                scanf("%d", &octalNumber);
                printf("%d in octal = %din binary", octalNumber, convertOctalToBinary(octalNumber));
                break;
        case 3:
                printf("Enter binary number: ");
                scanf("%d",&n);
                convertBinarytoHexadecimal(n,hex);
                break;
        case 4:
                printf("Enter hexadecimal number: ");
                scanf("%s",hex);

                break;
    }
}
    return 0;
}
int convertOctalToBinary(int octalNumber)
{
    int decimalNumber = 0, i = 0;
    int  binaryNumber = 0;

    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }

    return binaryNumber;
}
int convertBinarytoOctal(int binaryNumber)
{
    int octalNumber = 0, decimalNumber = 0, i = 0;

    while(binaryNumber != 0)
    {
        decimalNumber += (binaryNumber%10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}
int convertBinarytoHexadecimal(int n,char hex[])
{
    int decimalNumber=0;
    int rem;
    int i=0;
    while(n!=0)
    {
        decimalNumber=decimalNumber+(n%10)*pow(2,i);
        n/=10;
        i++;
    }
    printf("\nDecimal no:%d",decimalNumber);

    i=0;
    while(decimalNumber!=0)
    {
        rem=(decimalNumber %16);

        switch(rem)
        {
            case 10:
                    hex[i]='A';
                    break;
            case 11:
                    hex[i]='B';
                    break;
            case 12:
                    hex[i]='C';
                    break;
            case 13:
                    hex[i]='D';
                    break;
            case 14:
                    hex[i]='E';
                    break;
            case 15:
                    hex[i]='F';
                    break;

        }
        hex[i]=rem;
        printf("%d",rem);
        decimalNumber=decimalNumber/16;
        printf("%d",decimalNumber);
        i++;

    }

    int length;

    length=i;
    while (i < length)
    {
        int temp = hex[i];
        hex[i] = hex[length];
        hex[length] = temp;
        printf("%d",hex[i]);
        i++;
        length--;

    }

}
