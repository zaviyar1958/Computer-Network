#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("frame is: %d%s ", strlen(str), str);
    return 0;
}
