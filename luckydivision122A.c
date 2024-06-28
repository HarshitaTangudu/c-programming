#include <stdio.h>

int main()
{
    int n,t,z=0;
    scanf("%d",&n);
    t=n;
    while(t){
        if(t%10!=4 || t%10!=7){
            z=1;
            break;
        }
        t=t/10;
    }
    if(z==0){
        printf("YES");
    }
    else{
        if(n%4==0 || n%7==0 ||n%44==0 ||n%47==0 ||n%74==0 || n%77==0||n%444==0||n%447==0||n%474==0||n%477==0){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }

    return 0;
}