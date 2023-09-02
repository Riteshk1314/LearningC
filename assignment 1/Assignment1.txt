//  ********************  1. WAP TO DISPLAY HELLO WORLD  *********************


// # include <stdio.h>
// int main() {
//     printf("HELLO WORLD ");   
//     return 0;
// }


//  ********** 2. WAP TO INPUT AN INTEGER AND DISPLAY IT *****************


// # include <stdio.h>
// int main() {
//     int a;
//     printf("Enter a number -->  ");
//     scanf("%d",&a);
//     printf("The number entered is :  %d",a);
//     return 0;
// }


//  ************ 3.  WAP TO INPUT A DECIMAL NUMBER AND DISPLAY IT  *****************


// # include <stdio.h>
// int main() {
//     float a;
//     printf("Enter a decimal number -->  ");
//     scanf("%f",&a);
//     printf("The decimal number entered is :  %f",a);
//     return 0;
// }


// ******************* 4.  WAP TO INPUT A CHARACTER AND DISPLAY IT *********************


//  # include <stdio.h>
// int main() {
//     char a;
//     printf("Enter a character -->  ");
//     scanf("%c",&a);
//     printf("The character entered is : %c",a);
//     return 0;
// }


// ******************* 5. WAP TO INPUT A FRACTION AND DISPLAY IT *********************



// # include <stdio.h>
// int main() {
//     int a,b;
//     printf("Enter numerator of the rational number : ");
//     scanf("%d",&a);
//     printf("Enter denominator of the rational number : ");
//     scanf("%d",&b);
//     printf("The rational number is %d/%d : ",a,b);
//     return 0;
// }


// ******************* 6. WAP TO ADD SUBTRACT MULTIPLY AND DIVIDE NUMBERS *********************


// # include <stdio.h>
// int main() {
//     int a,b;
//     printf("Enter two numbers : ");
//     scanf("%d %d",&a,&b);
//     int sum=a+b,difference=a-b,product=a*b,division=a/b;
//     printf("\nSum of these numbers is = %d ",sum);
//     printf("\nDifference of these numbers is = %d ",difference);
//     printf("\nProduct of these numbers is = %d  ",product);
//     printf("\nDivision of these numbers is = %d ",division);
//     return 0;
// }


// ******************* 7. WAP TO FIND nth ROOT OF A NUMBER *********************


// # include <stdio.h>
// # include <math.h>
// int main() {
//     float a,b;
//     printf("Enter the number : ");
//     scanf("%f",&a);
//     printf("Enter the value of n : ");
//     scanf("%f",&b);
//     printf("nth root of the entered number is : %f ", pow(a,1/b));
//     return 0;
// }



// ******************* 8. WAP FOR AREA OF CIRCLE *********************


// # include <stdio.h>
// int main() {
//     float radius;
//     printf("Enter the radius of the circle : ");
//     scanf("%f",&radius);
//     float area=3.14*radius*radius;
//     printf("The area of the given circle is %f",area);
//     return 0;
// }



// ******************* 9. WAP FOR SIMPLE INTEREST *********************


// # include <stdio.h>
// int main() {
//     float p,r,t;
//     printf("Enter the Principle , rate and interest respectively :");
//     scanf("%f %f %f",&p,&r,&t);
//     float SI=(p*r*t)/100;
//     printf("The simple interest is : %f",SI);
//     return 0;
// }



// ******************* 10. WAP FOR COMPOUND INTEREST *********************


// # include <stdio.h>
// # include <math.h>
// int main() {
//     float A,P,R,T;
//     printf("Enter the Principle, Rate and Time respectively :");
//     scanf("%f %f %f",&P,&R,&T);
//     A= P* (pow((1 + (R/100)),T));
//     printf("The amount is : %f ",A);
//     float CI= A-P;
//     printf("CI is %f :",CI);
//     return 0;
// }


// ******************* 11. WAP TO CALCULATE GROSS SALARY *********************


// # include <stdio.h>
// int main() {
//     float gross_salary,da,ta,basic;
//     printf("Enter the basic salary :");
//     scanf("%f",&basic);
//     da=(0.1)*basic;
//     ta=(0.12)*basic;
//     gross_salary=basic+da+ta;
//     printf("The gross salary of the person is : \n %f",gross_salary);
//     return 0;
// }


















































