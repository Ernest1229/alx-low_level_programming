#include <stdio.h>
/**
 *main -  Entry level of the program
 *No parameter invloved
 * 
 * Long Description: Prints the sizes of the various types
 * Return: 0
 */
 
int main (void)
{
    char i;
    int j,k,l;
    float m;
    
    printf("Size of a char: %d byte(s)\n", sizeof(i));
    printf("Size of an int: %d byte(s)\n", sizeof(j));
    printf("Size of a long int: %d byte(s)\n", sizeof(k));
    printf("Size of a long long int: %d byte(s)\n", sizeof(l));
    printf("Size of a float: %d byte(s)\n", sizeof(m));
    return 0;
}
