#include<stdio.h>
#include<string.h>
int main(){
    char str[100], count=1;
    printf("nhap vao mot chuoi ky tu: ");
    fgets(str, 100, stdin);
    for(int i=(strlen(str)-1); i>=0; i--){
        if(str[i]==' '){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}