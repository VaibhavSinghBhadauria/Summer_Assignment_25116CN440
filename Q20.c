#include <stdio.h>

int main()
{
    long long n;
    long long largest = -1;
    int i;

    printf("Enter a number: ");
    scanf("%lld", &n);

    while(n % 2 == 0)
    {
        largest = 2;
        n /= 2;
    }

    for(i = 3; i * i <= n; i += 2)
    {
        while(n % i == 0)
        {
            largest = i;
            n /= i;
        }
    }

    if(n > 2)
        largest = n;

    printf("Largest Prime Factor = %lld", largest);

    return 0;
}