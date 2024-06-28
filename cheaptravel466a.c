#include <stdio.h>
 
int main()
{
    int n,m,a,b,r,k;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    if(m*a<=b){
        r=n*a;
    }
    else{
        k=(n%m)*a;
        if(k<b){
            r=k+(n/m)*b;
        }
        else{
            r=b+(n/m)*b;
        }
    }
    printf("%d",r);
 
    return 0;
}