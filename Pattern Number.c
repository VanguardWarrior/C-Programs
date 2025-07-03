#include <stdio.h>

void generate_pattern(int n){
    for (int i=n;i>=1;i--){
        for(int j=n;j>=1;j--){
            for(int k=0;k<i;k++){
                printf("%d",j);
            
                
            }
        }
        printf("\n");
    }
    printf("1\n");

}

int main() {
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("the pattern for %d is" , n);
    printf("\n");
    generate_pattern(n);
    
    

    return 0;
}