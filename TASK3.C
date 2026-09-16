#include <stdio.h>
int main() 
{
    char fullName[100];
    char ch;
    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Line Input Result ");
    printf("Entered Name: ");
    puts(fullName);
    printf("Enter a single character to see the difference: ");
    scanf(" %c", &ch);
    printf("Single Character Result\n");
    printf("Single character captured: %c\n", ch);
    return 0;
}