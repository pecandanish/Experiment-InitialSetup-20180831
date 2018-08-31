#ifndef utility_h
#define utility_h

#include <stdio.h>

#define LOG_INFO(format, ...) printf("[%s] " format, __FUNCTION__, __VA_ARGS__);

#define LOG_FUNC_ENTER() printf("**********************\n[%s] ENTER\n", __FUNCTION__);

#define LOG_FUNC_EXIT()  printf("[%s] EXIT\n**********************\n", __FUNCTION__);

#define HASH_SEED     37
#define HASH_PRIME_1  54059
#define HASH_PRIME_2  76963
#define HASH_PRIME_3  86969

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

#endif /* utility_h */
