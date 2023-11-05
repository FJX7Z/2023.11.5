#include <stdio.h>
int main()
{
double r=1;
double s;
printf("请输入圆的半径:");
scanf("%lf",&r);
s=3.1415926*r*r;
printf("面积为%.3lf\n",s);
return 0;
}