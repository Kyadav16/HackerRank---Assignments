C
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[100];
    
    // Read a full line of text including spaces until a newline character
    scanf("%[^\n]%*c", s);
    
    // Print "Hello, World!" followed by a new line
    printf("Hello, World!\n");
    
    // Print the string stored in variable s
    printf("%s\n", s);
    
    return 0;
}
