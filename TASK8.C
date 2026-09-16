#include <stdio.h>
int main() 
{
    float marks;
    printf("Enter student marks: ");
    scanf("%f", &marks);
    if (marks >= 50) 
    {
        printf("Pass\n");
    } 
    else 
    {
        printf("Fail\n");
    }
    return 0;
}