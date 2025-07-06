#include<stdio.h>
void generate_multiple(int n, int table[]){
    for(int i =1;i<=10;i++){
        table[i-1] = n * i;
    }
}

int main() {
    int n;
    int table[10];
    printf("enter the no of terms:");
    scanf("%d",&n);
    if (n<1 || n>10000){
        printf("invalid input");
        return 1;
    }
    
    generate_multiple(n,table);
    
    printf("Multiplication of %d is.\n",n);
    for(int i=0;i<10;i++){
        printf("%d ",table[i]);
    }
    printf("\n");
    return 0;
}
    
    
    



    
