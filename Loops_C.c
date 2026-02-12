// Write program to find sum of first 10 natural numbers
#include <stdio.h>

int main() {
    int sum = 0;
    for(int i = 0; i<11; i++){
        sum+=i;
    }
    printf("%d",sum);


    int n;
    scanf("%d\n", &n);
    for(int i = 0; i<11; i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
    
}
