#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int convertDecimalToBinary(int n);
int main()
{
    int p,n;
    int i,j;
    int a[20],q[20];
    int m[20];
    int multiplicand,multiplier;
    printf("Enter a decimal number(multiplicand): ");
    scanf("%d", &n);
    multiplicand=convertDecimalToBinary(n);

    for(j=0;j<18;j++)
    {
        scanf("%d",&mn[20]);
    }
    printf("\nThe mutiplicand is:%d",multiplicand);
    printf("\nEnter a decimal number(multiplier): ");
    scanf("%d", &p);
    multiplier=convertDecimalToBinary(p);
    printf("\nThe mutipliplier is:%d",multiplier);
    for(j=0;j<18;j++)
    {
        scanf("%d",&m[20]);
    }
    return 0;
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
