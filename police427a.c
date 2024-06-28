#include<stdio.h>
int main()
 {
    int n,t;
    int availableOfficers = 0;
    int untreatedCrimes = 0;
    scanf("%d", &n);
   for (int i = 0; i < n; i++) 
    {
        scanf("%d",&t);
        if (t == -1)
        {
            if (availableOfficers > 0) 
            {
                availableOfficers--;
            } 
            else 
            {
                untreatedCrimes++;
            }
        } 
        else
        {
            availableOfficers +=t;
        }
    }
    
    printf("%d\n", untreatedCrimes);
    
    return 0;
}