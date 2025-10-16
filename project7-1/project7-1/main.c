#include <stdlib.h>
#include <stdio.h>

int inc(int counter);

int main(int argc, char * argv[])
{
    int i = 10;
    printf("함수 호출 전 i = %d\n", i);
    inc(i);
    printf("함수 호출 후 i = %d\n", i);
    return 0;
}

int inc(int counter)
{
    counter++;
    return counter;
}
