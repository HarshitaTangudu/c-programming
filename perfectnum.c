#include<stdio.h>
#include<math.h>
void isP(int n)
{
    int sum=1,sn=sqrt(n);
    for(int i=2;i<=sn;i++){
        if(n%i==0){
            sum+=i;
            sum+=n/i;
        }
    }
    if(sum==n)
    printf("true");
    else
    printf("false");
    
}
int main(){
    int n;
    scanf("%d",&n);
    isP(n);
    return 0;
}