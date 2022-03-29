#include <stdio.h>
#include <stdlib.h>

int main()
{int radius;
const pie=3.142;
float area;

    printf("Enter radius\n");
    scanf("%d" , &radius);


    area=pie*radius*radius;
    printf("%f\n", area);


    return 0;
}
