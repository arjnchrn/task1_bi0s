#include<stdio.h>

void fibonacci(int n, int x );


int main() {
    int n, x;
    printf("Enter the starting term (n): ");
    scanf("%d", &n);
    printf("Enter the number of terms (x): ");
    scanf("%d", &x);
    fibonacci(n, x);
    return 0;
}


void fibonacci(int n, int x){
    long long int fib[n+x];
    fib[0]=0;
    fib[1]=1;

    if(n==0){
        printf("null\n");
    return;
    }
    for(int i=2; i<n+x; i++){
        fib[i]=fib[i-1] + fib[i-2];
    }
    
    for(int i=n-1; i<=n+x-2; i++){
        printf("%lld ", fib[i]);
    }
}    
