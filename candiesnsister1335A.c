#include <stdio.h>

int main()
{
    int t;
    long long int n,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
    scanf("%lld",&n);
    if(n<=2){
        printf("%d\n",0);
    }
    else{
            printf("%lld\n",(n-1)/2);
        }
    }
   
    return 0;
}