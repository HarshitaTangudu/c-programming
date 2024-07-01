int main(){
    int t;
    long long a,b,x;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld",&a,&b);
        x=a%b;
        if(x==0){
            printf("%d\n",0);
        }
        else{
            printf("%lld\n",b-x);
        }
        
    }
    return 0;
}