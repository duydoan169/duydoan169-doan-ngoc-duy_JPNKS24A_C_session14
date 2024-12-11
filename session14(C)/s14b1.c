#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("nhap vao mot chuoi ky tu: ");
    fgets(str, 100, stdin);
    fputs(str, stdout);
    printf("do dai chuoi ky tu la: %d", strlen(str)-1);
    return 0;
}