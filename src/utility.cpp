

#include "utility.h"

#define HASH_SEED     67
#define HASH_PRIME_1  56681
#define HASH_PRIME_2  68449
#define HASH_PRIME_3  80153

bool isPrime(unsigned int val)
{
    bool ret = true;
    
    for (int i=2; i<val; ++i)
    {
        if ((val % i) == 0)
        {
            ret = false;
            break;
        }
    }

    return ret;
}

void findAllPrimesBetween(unsigned int x, unsigned int y)
{
    int begin = (x <= y) ? x : y;
    int end   = (x == begin) ? y : x;
    
    for (int i=begin; i<=end; ++i)
    {
        if (isPrime(i))
        {
            printf("%d\n", i);
        }
    }
}

unsigned long hashString(const char *str)
{
    unsigned long hashCode = HASH_SEED;
    
    while (*str)
    {
        hashCode = (hashCode * HASH_PRIME_1) ^ (str[0] * HASH_PRIME_2);
        ++str;
    }
    
    return (hashCode % HASH_PRIME_3);
}
