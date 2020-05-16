#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char * removeKdigits(char * num, int k){
    char str[10002];
    memset(str, '-', sizeof(str));
    puts(str);
    return str;
}

int main()
{
    char *s = removeKdigits("1042", 3);
    return 0;
}
