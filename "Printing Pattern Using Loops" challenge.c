#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    
    int size = 2 * n - 1;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            
            int min_dist = row;
            if (col < min_dist) min_dist = col;
            if (size - 1 - row < min_dist) min_dist = size - 1 - row;
            if (size - 1 - col < min_dist) min_dist = size - 1 - col;
            
            
            printf("%d ", n - min_dist);
        }
        printf("\n");
    }

    return 0;
}
