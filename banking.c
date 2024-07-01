#include<stdio.h>
int main(){
    int n,k,bal=1000;
    printf("1.check bal\n");
    printf("2.deposit\n");
    printf("3.deposit\n");
    printf("4.exit\n");
    printf("Enter operation:");
    scanf("%d",&n);

    switch(n){
        case 1:
        printf("%d",bal);
        printf("1.check bal\n");
        printf("2.deposit\n");
        printf("3.deposit\n");
        printf("4.exit\n");
        printf("Enter operation:");
        scanf("%d",&n);
        break;
        case 2:
        printf("amount to be deposited:");
        scanf("%d",&k);
        bal=bal+k;
        printf("%d",bal);
        printf("1.check bal\n");
        printf("2.deposit\n");
        printf("3.deposit\n");
        printf("4.exit\n");
        printf("Enter operation:");
        scanf("%d",&n);
        break;
        case 3:
        printf("amount to be withdrawn:");
        scanf("%d",&k);
        bal=bal-k;
        printf("%d",bal);
        printf("1.check bal\n");
        printf("2.deposit\n");
        printf("3.deposit\n");
        printf("4.exit\n");
        printf("Enter operation:");
        scanf("%d",&n);
        break;
        case 4:
        break;
        default:
        printf("1.check bal\n");
        printf("2.deposit\n");
        printf("3.deposit\n");
        printf("4.exit\n");
        printf("Enter operation:");
        scanf("%d",&n);
        break;
        
    }
    return 0;
    
}