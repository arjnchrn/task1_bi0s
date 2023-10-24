#include <stdio.h>

int hash(char *str);

int main() {
    int pass_hash=798; // Hash for "password"

    char input[100];
    printf("Enter your password: ");
    scanf("%s", input);

    if (hash(input) == pass_hash) {
        printf("Correct.\n");
    } else {
        printf("nah.\n");
    }

    return 0;
}

int hash(char *str){
    int Hash=0;
    int i=0;

    while(*str){
        
    if(i%2 == 0){
        Hash += (*str<<1);
    }else{
        Hash -= (*str>>1);
    }

    str++;
    i++;
    }
    return Hash;
}
