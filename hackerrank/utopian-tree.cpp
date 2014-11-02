#include <stdio.h>
int main() {
    int t,n,i,j;
    long long int pow;
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&n);
        pow=1;
        j=(n/2+n%2+1);
        for(i=0;i<j;i++){
            pow<<=1;
        }
        
        printf("%ld\n",pow-n%2-1);
    }
    return 0;
}

