#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter base and height:");
  scanf("%f%f",base,height);
}
void find_area(float base,float height,float *area)
{
  *area=(base*height)/2;
}
void output(float base,float height,float area)
{
  printf("the area of the triangle with base %f and height %f  is %f",base,height,area);
}
int main()
{
  float a,b,c;
  input(&a,&b);
  find_area(a,b,&c);
  output(a,b,c);
}
