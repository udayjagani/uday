#include <stdio.h>

float tri(float b, float h)
{
    float Area = 0.5 * b * h;
    return Area;
}

float rec(float l, float w)
{
    float Area = l * w;
    return Area;
}


float cir(float r)
{
    float Area = (22.0 / 7) * (r * r);
  
    return Area;
}

int main()
{
    printf("PROGRAMME TO COMPUTE THE AREA OF A TRIANGLE, RECTANGLE OR CIRCLE");
    printf("\n\nMENU\nEnter 1 for a triangle\n2 for a rectangle\n3 for a circle\n");
    int command;
    scanf("%d", &command);
    if (command == 1)
    {
        printf("\nEnter\nbase:  ");
        float base, height, Area;
        scanf("%f", &base);
        printf("height:  ");
        scanf("%f", &height);
        Area = tri(base, height);
        printf("\nArea = %.2f", Area);
    }
    else if (command == 2)
    {
        printf("\nEnter\nlength:  ");
        float l, w, Area;
        scanf("%f", &l);
        printf("width:  ");
        scanf("%f", &w);
        Area = rec(l, w);
        printf("\nArea = %.2f", Area);
    }

    else if (command == 3)
    {
        printf("\nEnter radius:  ");
        float r, Area;
        scanf("%f", &r);
        Area = cir(r);
        printf("\nArea = %.2f", Area);
    }

    else
    {
        printf("Run again for a right menu!!!");
    }
    return 0;
}