
// assignment 6 strings and pointers
// link - https://drive.google.com/file/d/1KaMxjmvVyRpGtJRGk_lsqrQb4DlYV_IR/view

// //1. WAP to print the address/values of the different variables
// (int,float,char) using &amp; and * operators.

// #include <stdio.h>
// int main(){
//   int x= 10;
//   int *ptr=&x;
//    printf("Address of x: %p\n", &x);
//   printf("Value of x: %d\n", x);

//   printf("\n");

//   printf("Address of x: %p\n", ptr);
//   printf("Value pointed by ptr: %d\n", *ptr);

//   printf("*********** \n");

//   char m= 'a';
//   char *ptrc=&m;
//    printf("Address of x: %p\n", &m);
//   printf("Value of x: %c\n", m);

//   printf("\n");

//   printf("Address of x: %p\n", ptrc);
//   printf("Value pointed by ptr: %c\n", *ptrc);
//   return 0;
// }

// // 2. WAP to find out the difference between %u, %p, %x while printing the
// address of a
// // variable.

// #include <stdio.h>

// int main() {
//     int x = 42;

//     // Print address using %u (unsigned decimal)
//   printf("Address using %%u: %u\n", &x);

//     // Print address using %p (pointer address)
//     printf("Address using %%p: %p\n",  &x);

//     // Print address using %x (hexadecimal)
//   printf("Address using %%x: %x\n",&x);

//     return 0;
// }

// //4. Verify the addresses of adjacent elements stored in an array of char,
// int, float.

// #include <stdio.h>
// int main() {
//     char charArray[3];
//     int intArray[3];
//     float floatArray[3];
//     for (int i = 0; i < 3; i++) {
//         printf("Address of charArray[%d]: %p\n", i, &charArray[i]);
//     }
//     for (int i = 0; i < 3; i++) {
//         printf("Address of intArray[%d]: %p\n", i, &intArray[i]);
//     }
//     for (int i = 0; i < 3; i++) {
//         printf("Address of floatArray[%d]: %p\n", i, &floatArray[i]);
//     }
//     return 0;
// }

// // 5. Swap variables using pointers and functions.
// #include <stdio.h>
// int swap(int *a, int *b) {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
//   return 0;
// }
// int main(){
//   int x= 10;
//   int y= 20;
//   int *a=&x;
//   int *b=&y;

//   printf("value of a is %d  and b is %d ",x, y);
//   printf("\n");
//   swap(a,b);
//   printf("after the swap value of a is %d  and b is %d   ",x, y);

// }

// 11. WAP to concatenate two strings and compare two strings.

// //9 WAP to copy one string to another string with and without using the
// string handling
// // function.

// #include <stdio.h>

// int main() {

//   char str1[] = "Hello, world!";
//   int x= sizeof(str1)/sizeof(str1[0]);
//   char str2[x];
//   for (int i = 0; i < x; i++) {
//     str2[i]=str1[i];
//   }
//   printf("String 1: %s\n", str1);
//   printf("String 2: %s\n", str2);

// }

// //12. Count vowels in a given string.

// int counter(char str[]){

//   int count=0;
//   for(int i=0; str[i]!='\0'; i++){
//       if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
//       str[i] == 'u' ||
//            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O'
//            || str[i] == 'U') {
//             count++;
//         }
//       }
//       return count;
//     }

// int main (){

//   char strin[]="hello";
//   int z= counter(strin);
//   printf("%d", z);
//   return 0 ;

// }
// 10. WAP for the following
// U N
// U N I V
// U N I V E R
// U N I V E R S I
// U N I V E R S I T Y
// U N I V E R S I
// U N I V E R
// U N I V
// U N


#include<stdio.h>
#include<string.h>

int main()
{
    char a[50]="UNIVERSITY";
    int i,j;
    for(i=0;i<=8;i=i+2)
    {
        for(j=0;j<i+2;j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }
    for(i=6;i>=0;i=i-2)
    {
        for(j=0;j<i+2;j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }
}
