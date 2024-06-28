#include <stdio.h>

int main()
{
    int t,n,r,q,res;
    int l[18]={1,2,4,5,7,8,10,11,14,16,17,19,20,22,25,26,28,29};
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        r=n%18;
        q=n/18;
        if(r==0){
            r=18;
            q=q-1;
        }
        res=(q*30)+l[r-1];
        printf("%d\n",res);
    }

    return 0;
}