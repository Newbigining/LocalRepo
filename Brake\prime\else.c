#include<stdio.h>
int main(){
    int n;
    printf("Enter A Number:");
    scanf("%d",&n);
    int a=0;
    for (int i = 2; i <= n-1; i++)
    { if (n%i==0){
        a = 1;
        break;
    }
    }
    if (n==1) printf("1 Nather prime NOR composite\n");
    else if (a==0) printf("Enter Number is Prime\n");
    else printf("Enter Number is Composite:\n");
    printf("End");
    
    
    return 0;
}
