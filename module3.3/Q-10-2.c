#include <stdio.h>
struct data
{
    int rollno;
    char name[50];
    int age;
    long long int mobile;
};

int main()
{
    struct data s1;
    printf("%d", sizeof(s1));
    return 0;
}
