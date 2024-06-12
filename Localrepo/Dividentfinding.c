#include <stdio.h>
int main(){
    int a,b;
    printf("Enter 1st Number:-");
    scanf("%d",&a);
    printf("Enter 2nd Number:-");
    scanf("%d",&b);
    int q = a/b;
    int r = a-(b*q);
    printf("The divident is:-");
    printf("%d",&r);
    return 0;
}