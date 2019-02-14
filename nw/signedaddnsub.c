#include<stdio.h>
#include<math.h>
int convertBinaryToDecimal(int);
int convertDecimalToBinary(int );
int main()
{
        int n1,n2,nn1,nn2,sum,sub;
        printf("Enter binary number\t");
        scanf("%d",&n1);
        printf("Enter 2nd binary number\t");
        scanf("%d",&n2);
        nn1=convertBinaryToDecimal(n1);
        nn2=convertBinaryToDecimal(n2);
        sum=n1+n2;
        sub=n1-n2;
        printf("\nThe binary addition is:%d",convertDecimalToBinary(sum));
        printf("\nThe binary subtraction is:%d",convertDecimalToBinary(sub));
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
