#include <stdio.h>

int main() {
    char str[100];
    int count;
    printf("Nhap vao chuoi ki tu : ");
    fgets(str, sizeof(str), stdin); 
    for (i = 0; str[i]!='\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            count++;
        }
    }
    printf("so ki tu la chu cai trong chuoi la: %d\n", count);
    return 0;
}
