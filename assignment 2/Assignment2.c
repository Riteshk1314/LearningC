// CREDITS
//Arjun Singh singh.arjun2797@gmail.com //

// ************** 1. WAP FOR c.math FUNCTIONS ************


// # include <stdio.h>
// # include <math.h>
// int main() {
//     float x=0.7;
//     printf("\nsin(%f) = %f ",x,sin(x));
//     float y=3.14;
//     printf("\ncos(%f) = %f ",y,cos(y));
//     float z=100;
//     printf("\nlog(%f) = %f ",z,log(z));
//     float b=10,p=2;
//     printf("\npow(%f,%f) = %f ",b,p,pow(b,p));
//     float s=625;
//     printf("\nsqrt(%f)",s,sqrt(s));
//     return 0;
// }


// ************** 2. WAP TO FIND ROOTS OF QUAD EQN FOR D>=0 ************


// # include <stdio.h>
// # include <math.h>
// int main() {
//     int a,b,c;
//     printf("Enter the values of coefficients a,b and c : ");
//     scanf("%d %d %d",&a,&b,&c);
//     int descriminant=sqrt(b*b-4*a*c);
//     printf("The quadratic equation is : %dx^2 + %dx + %d\n",a,b,c);
//     int _1stroot = (-b + descriminant)/2*a;
//     int _2ndroot = (-b - descriminant)/2*a;
//     if(descriminant>=0) printf("1st root is --> %d \n2nd root is --> %d \n ",_1stroot,_2ndroot);
//     else printf("No real roots possible ");    
//     return 0;
// }


// ************** 3. WAP TO IMPLEMENT \n \t \b ************

// # include <stdio.h>
// int main() {
//     printf("Hello Friends\nHow are you?");
//     printf("\n\n");
//     printf("Hello Friends\tHow are you?");
//     printf("\n\n");
//     printf("Hello Friends\bHow are you?");
//     return 0;
// }


// ************** 4. WAP TO IMPLEMENT ASSIGNMENT OPERATORS **************


/*# include <stdio.h>
int main(){
int a=10,b=5;
int c=10,d=30,e=40,f=50;
a+=10;
printf("c is %d \n",c);
c-=10;
printf("d is %d \n",d);
d*=2;
printf("e is %d \n",e);
e/=10;
printf("f is %d \n",f);
f%=5;
printf("a+=10 is %d \nc-=10 is %d \nd*=2 is  %d \ne/=10 is  %d \nf%%=5 is  %d ",a,c,d,e,f);
return 0;}*/



// ************** 5. WAP TO SWAP 2 NUMBERS **************


// # include <stdio.h>
// int main() {
//     int a=10,b=20;
//     printf("\nThe value of a is %d and b is %d\n\n",a,b);
//     printf("After swapping --> ");
//     int temp=a;
//     a=b;
//     b=temp;
//     printf("The value of a is %d and b is %d\n",a,b);
//     return 0;
// }


// ************** 6. WAP TO IMPLEMENT BINARY OPERATORS OPERATORS**************


// # include<stdio.h>
// int main(){
// int a=12,b=25;
// 	printf("a & b is %d \n",a&b);
// 	printf("a | b is %d \n",a|b);
// 	printf("a ^ b is %d \n",a^b);
// 	printf("~a is %d \n",~a);
// 	printf("a << 1 is %d \n",a<<1);
// 	printf("a >> 1 is %d \n",a>>1);
//     return 0;}


// ************** 7. WAP TO UTILIZE TERNARY OPERATOR **************


// # include <stdio.h>
// int main() {
//     int a,b;
//     printf("Enter two numbers : ");
//     scanf("%d%d",&a,&b);
//     (a>b)? printf("%d is greater",a) : printf("%d is greater",b); 
//     return 0;
// }


// ************** 8. WAP TO USE sizeof() FUNCTION SIZE OF DATATYPES **************


// # include <stdio.h>
// int main() {
//     int a=23;
//     float b=43.43;
//     double c=423.2343;
//     char d='d';
//     long int e=423423;
//     printf("\nSize of int      a is %d ",sizeof(a));
//     printf("\nSize of float    b is %d ",sizeof(b));
//     printf("\nSize of double   c is %d ",sizeof(c));
//     printf("\nSize of char     d is %d ",sizeof(d));
//     printf("\nSize of long int e is %d ",sizeof(e));
//     return 0;
// }



// ************** 9. WAP TO USE TYPE CASTING  **************


// # include <stdio.h>
// int main() {
//     float a=55.889;    
//     float b=46.97;
//     float div=(int)(a/b);
//     printf("a/b is : %f and",div);
//     return 0;
// }


//************** 10. WAP to practice type casting using the atof/atoi ************************

//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//  char *s = "3.145";
//  float f = atof(s);
//  int i = atoi(s);
//  printf("f = %f\n", f);
//  printf("i = %d\n", i)
















































