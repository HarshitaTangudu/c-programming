/*#include<stdio.h>
//optimal
int xor(int n){
    if(n%4==1)
    return 1;
    if(n%4==2)
    return n+1;
    if(n%4==3)
    return 0;
    if(n%4==0)
    return n;
}
int main(){
    int l,r,k;
    scanf("%d %d",&l,&r);
    l=xor(l-1);
    r=xor(r);
    k=l^r;
    printf("%d",k);
    return 0;
}*/

/*
BRUTEFORCE
#include <stdio.h>

int main() {
   int l,u,r=0;
   scanf("/%d",&n);
   for(int i=l;i<=u;i++){
       r=r^i;
   }
   printf("%d",r);
    return 0;
}*/
