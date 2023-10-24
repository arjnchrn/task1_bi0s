#include <stdio.h>

int hash(char *str){
        int hash = 0;
        int i=0;

        while(*str){
        
        if(i%2 == 0){
            hash += (*str<<1);

        }else{
            hash -= (*str>>1);
        }
        str++;
        i++;

        }
        return hash;
    }

int main(){

    char x[100];
    printf("Enter password to be hashed :\n");
    scanf("%s", x);

    unsigned long pass_hash = hash(x);
    printf("The hash value is : %d\n", pass_hash);

    return 0;
}