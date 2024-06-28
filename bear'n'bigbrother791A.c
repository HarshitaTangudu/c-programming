#include <stdio.h>

int main()
{
    int li,b,c=0;
    scanf("%d %d",&li,&b);
    while(li<=b){
       li=li*3;
       b=b*2;
       c++;
    }
    printf("%d",c);

    return 0;
}