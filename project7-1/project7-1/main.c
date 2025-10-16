#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
    int i;
    
    for (i=0;i<5;i++)
    {
        int temp = 1;
        printf("temp = %d\n", temp);
        temp++;
    }
    
    return 0;
}
