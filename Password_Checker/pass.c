#include <stdio.h>

unsigned long long hash(char *str);

int main() {
    unsigned long long pass_hash = 2686115702749790208;

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

unsigned long long hash(char *str){
    unsigned long long hash = 1;
    int i = 0;

    while(*str){
        
    if(i % 2 == 0){
        hash *= (*str<<1);
    }else{
        hash *= (*str>>1);
    }

    str++;
    i++;
    }
    return hash;
}