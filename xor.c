/*
BRUTEFORCE
#include <stdio.h>

int main() {
   int n,r=1;
   scanf("/%d",&n);
   for(int i=2;i<=n;i++){
       r=r^i;
   }
   printf("%d",r);
    return 0;
}*/
//OPTIMAL
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%4==1)
    printf("%d",1);
    if(n%4==2)
    printf("%d",n+1);
    if(n%4==3)
    printf("%d",0);
    if(n%4==0)
    printf("%d",n);
    return 0;
}