#include <stdio.h>

int main(void)
{
    int currentYear = 2025;
    int birthYear = 2002;
    int age;
    age = currentYear - birthYear;
    printf("I am %d years old in %d.\n", age, currentYear);
    return 0;
}