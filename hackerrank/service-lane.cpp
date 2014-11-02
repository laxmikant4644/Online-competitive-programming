#include <stdio.h>

int main() {
    int t,w[100000],max;
    long int n,i,j;
    scanf("%ld %d",&n,&t);
    for(i=0;i<n;i++)
        scanf("%d",&w[i]);
    while(t--){
        max=3;
        scanf("%d %d",&i,&j);
        while(i<=j){
            if(w[i]==1){
                max=1;
                break;
            }
            
            if(w[i]==2){
                if(max==3){
                    max=2;
                }
            }
            
            i++;
        }
        
        printf("%d\n",max);
    }
    return 0;
}

