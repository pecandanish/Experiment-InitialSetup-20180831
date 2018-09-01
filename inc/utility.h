#ifndef utility_h
#define utility_h

#include <stdio.h>

#define LOG_INFO(format, ...) printf("[%s] " format, __FUNCTION__, __VA_ARGS__);

#define LOG_FUNC_ENTER() printf("**********************\n[%s] ENTER\n", __FUNCTION__);

#define LOG_FUNC_EXIT()  printf("[%s] EXIT\n**********************\n", __FUNCTION__);

unsigned long hashString(const char *str);

#endif /* utility_h */
