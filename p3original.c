#include<stdio.h>
int input_number()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i,c=0;
  for(i=1;i<=n;i++)
    {
      if(n %i ==0)
        c++;
    }
    return c;
}
void output(int n,int composite)
{
  if(composite>2)
    printf("%d is a composite number",n);
  else
    printf("%d is not a composite number",n);
}
int main()
{
  int a,b;
  a=input_number();
  b=is_composite(a);
  output(a,b);
  return 0;  
    
}


