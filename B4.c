#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    char a;
    int count=0;
    printf("Nhap chuoi ky tu: ");
    fgets(str,1000,stdin);
    int n=strlen(str);
    printf("\nnhap 1 ki tu: ");
    scanf("%c", &a);
    for(int i = n-1;i>=0;i--){
       if(str[i] == a){
           count++;
       }
    }
    printf("So ki tu co trong mang la: %d\n",count);
}
