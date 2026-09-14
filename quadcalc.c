#include<stdio.h>
#include<math.h>
#include<complex.h>

int main(void)
{
  float a, b, c, d, r1, r2;
  char o;
  printf("Roots(r) or coefficients(c)?\n");
  scanf("%c", &o);
  switch (o) 
  {
    case 'r':
    printf("You choose roots!\n");
    break;

    case 'c':
    // printf("Yos choose coeffs!\n");
    printf("Enter a(x squared) b(x) c\n");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b - 4*a*c;
    if (d >= 0)
    {
      printf("Roots are real i.e, dicriminant is postive\n");

      r1 = (-b+sqrt(d))/(2*a);
      r2 = (-b-sqrt(d))/(2*a);

      printf("Discriminat is %f\n", d);
      printf("1st root is %f\n", r1);
      printf("2nd root is %f\n", r2);
    } else if(d < 0)
    {
      printf("have to fix");
    }
    break;

    default:
    printf("Enter a valid choice");
  }
}
