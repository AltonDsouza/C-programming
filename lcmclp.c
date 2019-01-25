//Lcm of two numbers using CLP.
#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b;
    if(argc!=3)
    {
        printf("Enter three arguments:filename arg1 arg2\n");
        return 0;
    }
    
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    int x,y;
    x = a;
    y = b;
    while(a!=b)
    {
        if(a<b)
        {
            a = a + x;    
        }
        else
        {
            b = b + y;   
        }
    }
    printf("The LCM of %d and %d is %d\n",x,y,a);
    return 0;
}
