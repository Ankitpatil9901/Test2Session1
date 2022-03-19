#include<stdio.h>
int input()
{
  int x;
  printf("Enter the value of x");
  scanf("%d",&x);
  return x;
}
int find_fibo(int n)
{
  int a=0,b=1,c=0;
  for(int i=2;i<=n;i++)
    {
      c=a+b;
      a=b;
      b=c;
    }
  return c;
}
void output(int n,int fibo)
{
  printf("%d th fibonacci number is %d",n,fibo);
}
int main()
{
  int x,fibo;
  x=input();
  fibo=find_fibo(x);
  output(x,fibo);
  return 0;
}