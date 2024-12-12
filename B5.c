#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    int  count;
    int check;
    printf("Nhap chuoi ky tu:");
    fgets(str,1000,stdin);
    int n = strlen(str);
    for(int i=0;i<n;i++) {
      if(str[i]==''){
          check=0;
       }else if(check==0){
           check=1;
           count++;
       }
    }
    printf("So ki tu co trong mang la:%d",count);
}
