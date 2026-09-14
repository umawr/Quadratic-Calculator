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
    printf("Enter a(x squared) b(x) c\n\n");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b - 4*a*c;
    printf("%-16s: %.2f\n", "x squared coeff", a);
    printf("%-16s: %.2f\n", "x coeff", b);
    printf("%-16s: %.2f\n", "constant", c);    if (d >= 0)
    {
      
      r1 = (-b+sqrt(d))/(2*a);
      r2 = (-b-sqrt(d))/(2*a);
      
      printf("\nDiscriminant is %.2f\n", d); 
      if (r1 > r2)
      {
        printf("\nRoots are real, dicriminant is postive\n\n");
        printf("1st root is %f\n", r1);
        printf("2nd root is %f\n\n", r2);
      } else if (r2 > r1)
      {
        printf("\nRoots are real, dicriminant is postive\n\n");
        printf("1st root is %f\n", r2);
        printf("2nd root is %f\n\n", r1);

      } else if (r1 = r2)
      {
        printf("\nRoots are equal, dicriminant is zero\n\n");
        printf("Both roots are %f\n\n", r1);
      }
    } else if(d < 0)
    {
      printf("have to fix");
    }
    break;

    default:
    printf("Enter a valid choice");
  }
}
