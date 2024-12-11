#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("nhap vao mot chuoi ky tu: ");
    fgets(str, 100, stdin);
    fputs(str, stdout);
    for(int i=0; i<strlen(str)-1; i++){
        printf("%c ", str[i]);
    }

    return 0;
}