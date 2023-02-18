#include <stdio.h>
#include <stdbool.h>

int main(){
    // data types 

    char a = "C"; // characters stores only single values: %c
    char b[] = "Bro"; // array of characters or stirngs: %s

    float c = 3.141592;     // 4 bits (32 bit of precision) 6-7 digits %f
    double d = 3.1415689303;    // 8 bits (64 bits of precision) 15-16 digits %if

    bool e = true;      // 1 byte (true or false)

    char f = 120;       // 1 byte (-128 - +127) %d or %c
    unsigned char g = 255 // 1 byte (0 - 255) %d or % c

    short h = 32767;    // 2 byte (-32,768 to +32,767); %d
    unsigned short int i = 65535;   // 2 byte (0 to +65,535) %d

    int j = 2147483647;     // 4 bytes (-2,147,483,648 to - +2,147,483,647) %d
    unsigned int k = 4294967295;    // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 9223372036854775807; // 8 bytes (9 quintilion to +9 quintilion) %lld
    unsigned long long int m = 92233720368547758070U; // 8 bytes (0 to 18 quintillion) %llu

    printf("%0.15f\n", c);
    printf("%0.15lf\n", d);
    printf("%d\n", e); 
    // char
    printf("%d\n", f); // display as int
    printf("%c\n", f); // display as character unicode representation
    // storts int
    printf("%d\n", h);
    // interger
    printf("%d\n", j);
    printf("%u\n", k);
    // long long int
    printf("%lld\n", l);
    printf("%llu\n", m);
}
