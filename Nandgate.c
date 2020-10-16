a = 1
b = 2
even_sum = 2
c = a + b
while c<4000000:
    a = b
    b = c
    if c % 2 == 0:
        even_sum += c
        c = a + b
    c = a + b

    
print('even sum : ', even_sum)


https://www.geeksforgeeks.org/program-to-implement-logic-gates/

#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 
    int a[5] = { 1, 0, 1, 0}; 
    int b[5] = { 0, 1, 1, 0}; 
    int i, x,y,z; 
    
// xor
    for (i = 0; i < 4; i++) { 
  
        x = a[i] ^ b[i]; 
  
        printf("\n %d XOR %d = %d\n", 
               a[i], b[i],x); }
               
// nand               
               
    for (i = 0; i < 4; i++) { 
        if (a[i] == 1 && b[i] == 1) 
            y = 0; 
        else
            y = 1; 
        printf("\n %d NAND %d = %d\n", 
               a[i], b[i], y); 
    }  
    
// nor    
    for (i = 0; i < 4; i++) { 
        z = !(a[i] + b[i]); 
        printf("\n %d NOR %d = %d", 
               a[i], b[i], z); 
    }

    
} 
