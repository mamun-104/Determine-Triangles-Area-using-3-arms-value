#include<stdio.h>
#include<math.h>

/// Determine Triangles Area using 3 arms value
/// Heron's Formula: s = (a+b+c)/2 ,,,,,,,, Area = sqrt(s*(s-a)*(s-b)*(s-c))

int main()
{
    double a,b,c,s,Area;
    scanf("%lf%lf%lf",&a,&b,&c);

    s = (a+b+c)/2;
    Area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area = %.5lf\n",Area);

    return 0;
}

