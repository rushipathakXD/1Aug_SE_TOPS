//Wap find the prime numbers from a range given by user
#include <stdio.h>

int main() 
{
    int start, end, i, j, prime;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for(i = start; i <= end; i++) {
        if(i < 2) 
		continue;
        prime = 1;
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }
        if(prime)
            printf("%d ", i);
    }
    return 0;
}
