#include<stdio.h>
#include<math.h>

int main(void)
{
  float a, b, c, d, sor, por, r1, r2, real, imaginary;
  char o;
  printf("Roots(r) or coefficients(c)?\n");
  scanf("%c", &o);
  switch (o) 
  {
    case 'r':
    
    printf("You choose roots!\n");
    printf("Enter the roots\n");
    scanf("%f %f", &r1, &r2);
    if (r1 > r2)
    {
      printf("1st root is %.2f\n", r1);
      printf("2nd root is %.2f\n", r2);
    } else if (r2 > r1)
    {
      printf("1st root is %.2f\n", r2);
      printf("2nd root is %.2f\n", r1);

    } else
    {
      printf("Both roots are %.2f\n", r1);

    }
    sor = r1 + r2;
    por = r1*r2;

    printf("\nx squared %+.2fx %+.2f\n", sor, por);
    printf("\nSum of roots are %.2f\n", sor);
    printf("Product of roots are %.2f\n\n", por);
    
    break;

    case 'c':
    printf("Enter a(x squared) b(x) c\n\n");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b - 4*a*c;
    printf("\n%-16s: %f\n", "x squared coeff", a);
    printf("%-16s: %f\n", "x coeff", b);
    printf("%-16s: %f\n", "constant", c);    
    if (d >= 0)
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
      real = -b/(2*a);
      imaginary = sqrt(-d)/(2*a); // '-'d to make the under root number positive
      printf("\nRoots are complex\n\n");
      printf("1st root is  %.2f + %.2fi\n", real, imaginary);
      printf("2nd root is  %.2f - %.2fi\n\n", real, imaginary);
    }
    break;

    default:
    printf("Enter a valid choice");
  }
}
