#include <stdio.h>
#define MOD 1000000007
long long fast_pow(long long base , long long exp){
    long long result =1;
    base = base % MOD;
    while (exp >0){
        if (exp & 1){
            result = (result * base ) % MOD;

        }
        base=(base *base) % MOD ;
        exp >>= 1;
2


    }
    return result;
}
long long nthTerm(long long a, long long r, long long n) {
    long long power = fast_pow(r, n - 1);
    return (a * power) % MOD;
}
int main() {
    long long a, r, n;
    printf("Enter first term (a): ");
    scanf("%lld", &a);
    
    printf("Enter common ratio (r): ");
    scanf("%lld", &r);
    
    printf("Enter term number (n): ");
    scanf("%lld", &n);

    long long result = nthTerm(a, r, n);
    printf("The %lldth term of the GP is: %lld\n", n, result);

    return 0;
}


