#include <stdio.h>

int main() {
    char name[100];
    int height;
    printf("Enter name : ");
    scanf("%s", name);
    printf("Enter height (cm.) : ");
    scanf("%d", &height);
    printf("Output : \n\tName \t%s\n\tHeight \t%d Cm",name,height);
}