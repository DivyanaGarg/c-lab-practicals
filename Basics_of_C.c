#include <stdio.h> //Preprocessor directives or header files(.h)
int x; //Global declarative
int main(){ //Function definitions - compiler starts here
printf("Hello\n");
int y; //Local declarative
printf("Enter x and y:\n");
scanf("%d",&x);
scanf("%d",&y);
printf("Sum is %d",x+y);
printf("\n%c %d %f", 90, 35, 4.4);
printf("\n%5d% 8.2f",  753, 4.1678);
printf("\n%-5d% .3f", 753, 4.1678);
printf("\n%05d% 8.3f", 753, 4.1678);
char s1[20];
scanf("\n%s", &s1);
printf("\n%s",s1);
char name[20];
//fgets(name, sizeof(name), );
printf("\n");
// See from some one else, all the commands and about buffer
}
//.c file then object file then .exe file 
