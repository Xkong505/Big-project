#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double funcos(double e, double x);

int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

/* 你的代码将被嵌在这里 */
double funcos(double e, double x)
{
    double m = 0, k = 1, sum = 0;
    int n = 0;
    while (1)
    {
        k = 1;
        for (int i = 1;i < n + 1;i++)
        {
            k *= i;
        }
        if (fabs(pow(-1, n / 2) * pow(x, n) / k) < e)
        {
            break;
        }
        sum += pow(-1, n / 2) * pow(x, n) / k;
        //if (fabs(pow(-1, n / 2) * pow(x, n) / k) < e)
        //{
        //    break;
        //}
        n += 2;
    }
    return sum;


}