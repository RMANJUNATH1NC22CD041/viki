#include <stdio.h>

int main() {
    int a = 10, b = 20, temp;
    
    temp = a;
    a = b;
    b = temp;
    
    printf("After swapping, a = %d\n", a);
    printf("After swapping, b = %d\n", b);
    
    return 0;
}
