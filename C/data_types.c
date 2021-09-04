#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    #define MAX_LIMIT 100
    
    int integer = 0;
    double doble;
    char palabra[MAX_LIMIT];
    
    scanf("%d\n", &integer);
    //scan lf stands for scanning a long float
    scanf("%lf\n", &doble);
    //use fgets to scan a string with spaces and use \n after last scan
    //so fgets ignore the jumpline and scan it properly
    fgets(palabra, MAX_LIMIT, stdin);
 
 
    // Print the sum of both integer variables on a new line.
    printf("%d\n",integer+i);
    
    // Print the sum of the double variables on a new line.
    //limiting number of decimals with .1 or .2 
    printf("%.1lf\n",d + doble);
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s\n", s, palabra);

    return 0;
}
