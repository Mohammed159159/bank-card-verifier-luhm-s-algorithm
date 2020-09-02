#include<stdio.h>

int main() {

    //var decleration
    long long n, arr[20], tem[20], sum1 = 0, sum2 = 0, sum;
    int i = 0;

    printf(" Enter Card Number: ");
    scanf_s("%lld", &n);

    //getting the inverse of the number in a temporary array
    for (i; n > 0; i++)
    {
        tem[i] = n % 10;
        n = n / 10;

    }

    // putting the correct order of the number in another array
    for (int c = 0, j = i - 1; c < i; c++, j--)
    {
        arr[c] = tem[j];
    }

    //doing the check sum
    for (int i1 = 0, i2 = 1, su; i1 < i - 1; i1 += 2, i2 += 2)
    {
        for (int k = 0, su = (arr[i1] * 2); k < 2; k++)
        {
            sum1 += su % 10;

            su = su / 10;
        }
        sum2 += arr[i2];
    }


    sum = sum1 + sum2;

    printf("\n ");

    if (sum % 10 == 0 && i <= 16)
        //checking other card type
    {
        if (i == 15 && arr[0] == 3)
        {
            if (arr[1] == 4 || arr[1] == 7)
                printf("AMEX");

        }
        else if (i == 16 && arr[0] == 5)
        {
            for (int l = 1; l <= 5; l++)
            {
                if (arr[1] == l)
                {
                    printf("MASTERCARD");
                    break;
                }
            }
        }
        else if (i == 13 || i == 16 && arr[0] == 4)
            printf("VISA");

    }
    else printf("Unvalid");





}