#include <stdio.h>
#include <math.h>
#pragma hdrstop
#pragma argsused
int main(int argc, char* argv[])
{
    double x, y, z, a, b, c, rez;
    puts("\n\tx, y, z = ");
    scanf("%lf%lf%lf", &x, &y, &z);
    a = (2 * cos(x - M_PI/6)) / (0.5 + pow(sin(y), 2));
    b = 1 + pow(z, 2)/3 - pow(z, 2)/5;
    rez = a*b;
    printf("\n x = %7.3lf\n y = %7.3lf\n z = %7.3lf\nRezult = %lf\n", x, y, z, rez);
    puts("Press any key ... ");
    return 0;
}