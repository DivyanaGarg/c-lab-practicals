#include <stdio.h>
#include <string.h>

// int main() {
//     //Check prime
//     int n;
//     scanf("%d", &n);
//     if (n <= 1) {
//         printf("Not Prime");
//         return 0;
//     }
//     for (int i = 2; i < n/2; i++) {
//         if (n % i == 0) {
//             printf("Not Prime");
//             return 0;
//         }
//     }
//     printf("Prime");
//     return 0;
// }

// //Sum of digits
// int main() {
//     int n, sum = 0;
//     scanf("%d", &n);
//     while (n > 0) {
//         sum = sum + (n % 10);
//         n = n / 10; 
//     }
//     printf("%d", sum);
//     return 0;
// }

// int main(){
//     char str[20];
//     int i,l;
//     scanf("%s", &str);
//     l=strlen(str);
//     for(i=l-1;i>=0;i--){
//         printf("%c",str[i]);
//     }
//     return 0;
// }

// int main(){
//     int start = 0, end = 0, sum = 0;
//     printf("Please enter a start: ");
//     scanf("%d", &start);
//     printf("\nPlease enter an end: ");
//     scanf("%d", &end);

//     for(int i = start; i <= end; i++){
//         if(i % 2 == 0) sum += i;
//     }
//     printf("%d\n", sum);
// }

int main(){
    int n1, n2, temp;
    scanf("%d %d", &n1, &n2);
    while (n2!=0){
        temp=n2;
        n2=n1%n2;
        n1=temp;
    }
    printf("%d",n1);
    return 0;
}