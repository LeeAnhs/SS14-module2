#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    printf("Nhap mot chuoi bat ky: ");
    fgets(inputString,sizeof(inputString),stdin);
    inputString[strcspn(inputString,"\n")] = 0;
    int lengthofstring=strlen(inputString);
    printf("Chuoi vua nhap: %s\n",inputString);
    printf("Do dai chuoi la: %d",lengthofstring);
    return 0;
}
