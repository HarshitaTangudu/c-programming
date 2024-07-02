#include <stdio.h>
int isH(int n){
    int r=0,temp=n;
    while(n>0){
        r=r+n%10;
        n=n/10;
    }
    if(temp%r==0){
        return r;
    }
    else{
        return -1;
    }
}
int main() {
   int n,p;
   scanf("%d",&n);
   p=isH(n);
   printf("%d",p);
}