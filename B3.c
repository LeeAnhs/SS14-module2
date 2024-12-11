#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    printf("Nhap chuoi ky tutu: ");
    fgets(str, 1000, stdin);
    int n = strlen(str);
    for(int i = n-1; i >= 0; i--) {
        printf("%c ", str[i]);
    }
    printf("co %d ki tu", n - 1);
}
