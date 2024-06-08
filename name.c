// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("%d\n%d\n%d \n",a,b,c);
//     printf("%d\n%d\n%d \n",&a,&b,&c);
// return 0;
// }

#include<stdio.h>

int main()
{
    int a, b, c;
    
    // Print the uninitialized values of a, b, and c
    printf("Values of a, b, and c:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    
    // Print the addresses of a, b, and c
    printf("Addresses of a, b, and c:\n");
    printf("&a: %p\n", &a);
    printf("&b: %p\n", &b);
    printf("&c: %p\n", &c);
    
    return 0;
}
