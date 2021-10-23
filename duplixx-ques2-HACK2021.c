#include <stdio.h>
int main()
{
    int a, b, c,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
     scanf("%d%d%d", &a, &b, &c);
     if(a>b && a>c)
     {
        if(b>c)
            printf("%d\n", b);
        else
            printf("%d\n", c);
     }
     else if(b>c && b>a)
     {
        if(c>a)
            printf("%d\n", c);
        else
            printf("%d\n", a);
     }
     else if(a>b)
            printf("%d\n", a);
        else
            printf("%d\n", b);
     }
    return 0;

}



