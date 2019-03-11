#include <stdio.h>

int main()
{
    int a,b,a1,b1,a2,b2;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&a1,&b1);
    scanf("%d %d",&a2,&b2);
    if((a==a1 && a1==a2) || (b==b1 && b1==b2)) 
    {
      printf("yes");
    }
    else
    {
      puts("no");
    }
return 0;
}
