#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    printf("Nhap chuoi ky tu: ");
    fgets(str, 1000, stdin);
    int n = strlen(str);
    for(int i = 0; i < n; i++) {
        printf("%c ", str[i]);
    }
    printf("\nco %d ki tu", n );
}
