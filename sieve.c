#include <stdio.h>
#include <string.h>
 
// marks all mutiples of 'a' ( greater than 'a' but less than equal to 'n') as 1.
void markMultiples(bool arr[], long long int a, long long int n)
{
    long long int i = 2, num;
    while ( (num = i*a) <= n )
    {
        arr[ num-1 ] = 1; // minus 1 because index starts from 0.
        ++i;
    }
}
 
// A function to print all prime numbers smaller than n
void SieveOfEratosthenes(long long int n)
{
    // There are no prime numbers smaller than 2
    if (n >= 2)
    {
        // Create an array of size n and initialize all elements as 0
        bool arr[n];
        memset(arr, 0, sizeof(arr));
 
        /* Following property is maintained in the below for loop
           arr[i] == 0 means i + 1 is prime
           arr[i] == 1 means i + 1 is not prime */
        for (long long int i=1; i<n; ++i)
        {
            if ( arr[i] == 0 )
            {
                //(i+1) is prime, print it and mark its multiples
                printf("%lld ", i+1);
                markMultiples(arr, i+1, n);
            }
        }
    }
}
 
// Driver Program to test above function
int main()
{
    long long int n,t ;
    scanf("%lld",&t);
    while(t--)
    {
    scanf("%lld",&n);
   // printf("%d\n", n);
    SieveOfEratosthenes(n);
    }
    
    return 0;
}
