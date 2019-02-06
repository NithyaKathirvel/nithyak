#include <stdio.h> 
  
int main() 
{ 
    int A; 
  
    printf("input: "); 
    scanf("%d", &A); 
  
    if (A > 0) 
        printf("positive."); 
    else if (A < 0) 
        printf(" negative."); 
    else if (A == 0) 
        printf("zero"); 
  
    return 0; 
} 
