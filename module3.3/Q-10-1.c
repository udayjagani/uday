
#include <stdio.h>
union data
{
    int rollno;
    char name[50];
    int age;
    long long int mobile;
};

int main()
{
    union data s1;
    printf("%d", sizeof(s1));
    return 0;
}