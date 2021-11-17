#include <stdio.h>
#include <string.h>
int main()
{
    //int num = 0;
    // scanf("%d", &num);
    // if(num%2==0)
    // {
    //     printf("%d不是奇数", num);
    // }
    // else
    // {
    //     printf("%d是奇数", num);
    // }

    int i = 1;
    while(i<=100)
    {
        // if(i%2==1)
        // {
        //     printf("%d ", i);      
        // }
        // i++;
        printf("%d ", i);
        i += 2;
    }
    return 0;
}