#include<stdio.h>
#include<string.h>
int main(){
    char str[100], count=0, find;
    printf("nhap vao mot chuoi ky tu: ");
    fgets(str, 100, stdin);
    printf("nhap ki tu muon tim: ");
    scanf("%c", &find);
    for(int i=(strlen(str)-1); i>=0; i--){
        if(str[i]==find){
            count++;
        }
    }
    printf("so lan %c xuat hien la %d", find, count);
    return 0;
}