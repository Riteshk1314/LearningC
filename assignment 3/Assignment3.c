// CREDITS
//Arjun Singh singh.arjun2797@gmail.com //

/*********** 1. WAP TO CHECK ENTERED CHARACTER IS CAPITAL LETTER, SMALL LETTER, A DIGIT OR SPECIAL SYMBOL ***********/


// # include <stdio.h>
// int main() {
//     char character;
//     printf("Enter the character : ");
//     scanf("%c",&character);
//     printf("\n");
//     int ascii=(int)character;
//     if(ascii>=48 && ascii<=57) printf("Enter character is a DIGIT!!");
//     else if(ascii>=65 && ascii<=90) printf("Entered character is a CAPITAL LETTER!!");
//     else if(ascii>=97 && ascii<=122) printf("Entered character is SMALL LETTER!!");
//     else printf("Entered character is a SPECIAL SYMBOL!!");
//     return 0;
// }



/******************* 2. WAP TO CHECK GREATEST OF THREE NUMBERS ************************/

// (a) --> using if else.....


// # include <stdio.h>
//  int main() {
//      int num1,num2,num3;
//      printf("Enter any three numbers of your choice : \n");
//      scanf("%d %d %d",&num1,&num2,&num3);
//      if(num1>num2 && num1>num3) printf("%d is the greatest of all. ",num1);
//      else if(num2>num1 && num2>num3) printf("%d is the greatest of all. ",num2);
//      else printf("%d is the greatest of all. ",num3);
//      return 0;
//  }

// (b) --> using ternary operator.......


// # include <stdio.h>
// int main() {
//     int num1,num2,num3;
//     printf("Enter any three numbers of your choice : \n");
//     scanf("%d %d %d",&num1,&num2,&num3);
//     int max= (num1>num2)? (num1>num3)? printf("%d is greatest",num1):printf("%d is the greatest",num3):(num2>num3)? printf("%d is the greatest",num2):printf("%d is the greatest",num3);
//     return 0;
// }



/******************* 3. WAP TO IMPLEMENT CALCULATOR (+,-/,*,% ) USING SWITCH STATEMENT ************************/


// #include <stdio.h>
// int main()
// {
//     char operator;
//     float a, b;
//     printf("Enter two numbers : \n");
//     scanf("%f %f", &a, &b);
//     printf("Enter the operation : \n");
//     scanf(" %c", &operator); // Adding a space before %c to consume any whitespace.
//     switch (operator)
//     {
//     case ('+'):
//         printf("\nThe sum is = %f", a + b);
//         break;
//     case ('-'):
//         printf("\nThe subtraction is = %f", a - b);
//         break;
//     case ('/'):
//         printf("\nThe division is = %f", a / b);
//         break;
//     case ('*'):
//         printf("\nThe product is = %f", a * b);
//         break;
//     case ('%'):
//         printf("\nThe remainder is = %f", (int)a % (int)b);
//         break;
//     default:
//         printf("\nInvalid operation ");
//     }
//     return 0;
// }



/******************* 4. WAP TO DISPLAY MONTH NAME ACCORDING TO THE MONTH NUMBER USING SWITCH STATEMENT ********************/



/*# include <stdio.h>
int main() {
    int i;
    printf("Enter the month number :\n");
    scanf("%d",&i);
    switch(i){
        case(1):
        printf("January");
        break;
        case(2):
        printf("February");
        break;
        case(3):
        printf("March");
        break;
        case(4):
        printf("April");
        break;
        case(5):
        printf("May");
        break;
        case(6):
        printf("June");
        break;
        case(7):
        printf("July");
        break;
        case(8):
        printf("August");
        break;
        case(9):
        printf("September");
        break;
        case(10):
        printf("October");
        break;
        case(11):
        printf("November");
        break;
        case(12):
        printf("December");
        break;
        default:
        printf("Invalid");
    }
    
    return 0;
}*/



/******************* 5. WAP TO CHECK A NO. SAY ‘N’ DIVISIBLE BY 5 AND/OR 8. ********************/



// # include <stdio.h>
// int main() {
//     int num;
//     printf("Enter a number :\n");
//     scanf("%d",&num);
//     if(num%5==0 && num%8==0) printf("%d is divisible by both 5 and 8. ",num);
//     else if(num%5==0 && num%8!=0) printf("%d is divisible by 5 only. ",num);
//     else if(num%5!=0 && num%8==0) printf("%d is divisible by 8 only. ",num);
//     else printf("Number is neither divisible by 5 nor 8  :( ");
//     return 0;
// }



/******************* 6. WAP TO CHECK WHETHER NUMBER IS : (A) EVEN OR ODD (B) NEGATIVE OR POSITIVE ********************/


// (a) --> using if else ....
// (A) EVEN/ODD
/*# include <stdio.h>
int main() {
    int num;
    printf("Enter a number :\n");
    scanf("%d",&num);
    if(num%2==0) printf("%d is even",num);
    else printf("%d is odd",num);
    return 0;
}


// (B) POSITIVE/NEGATIVE:

// # include <stdio.h>
// int main() {
//     int num;
//     printf("Enter a number\n");
//     scanf("%d",&num);
//     if(num>0) printf("%d is positive",num);
//     else if(num<0) printf("%d is negative",num);
//     else printf("%d is neither positive nor negative",num);

//     return 0;
// }


// //(b) USING TERNARY OPERATOR...


// // (A) EVEN/ODD

// # include <stdio.h>
// int main() {
//     int num;
//     printf("Enter a number\n");
//     scanf("%d",&num);
//     (num%2==0)? printf("%d is even",num) : printf("%d is odd",num);
//     return 0;
// }

// // (B) POSITIVE/NEGATIVE:

// # include <stdio.h>
// int main() {
//     int num;
//     printf("Enter a number\n");
//     scanf("%d",&num);
//     if(num==0) printf("It's zero");
//     (num>0)? printf("%d is positive",num) : printf("%d is negative",num);
//     return 0;
// }*/




/******************* 7. WAP WRITE A PROGRAM TO READ IN 5 NUMBERS AND COMPUTE THE AVERAGE, MAX, MIN, STANDARD DEVIATION. ********************/



/*# include <stdio.h>
# include <math.h>
int max(int a,int b,int c,int d,int e){
    int max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    if(d>max) max=d;
    if(e>max) max=e;
    return max;
}
int min(int a,int b,int c,int d,int e){
    int min=a;
    if(b<min) min=b;
    if(c<min) min=c;
    if(d<min) min=d;
    if(e<min) min=e;
    return min;
}
int main() {
    float a,b,c,d,e;
    printf("Input five numbers : ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    float avg=(a+b+c+d+e)/5;
    float maximum =max(a,b,c,d,e);
    float minimum =min(a,b,c,d,e);
    float variance= (pow(a-avg,2)+pow(b-avg,2)+pow(c-avg,2)+pow(d-avg,2)+pow(e-avg,2))/5;
    float SD=pow(variance,1.0/2.0);
    printf("Numbers entered are %f %f %f %f %f \n",a,b,c,d,e);
    printf("Average = %f \nMaximum = %f \nMinimum = %f \nStandard deviation = %f ",avg,maximum,minimum,SD);
    return 0;
}*/



/******************* 8. WAP FOR LIBRARY FINE PROBLEM ********************/


// # include <stdio.h>
// int main() {
//     int days;
//     float fine;
//     printf("Enter the number of days : \n");
//     scanf("%d",&days);
//     if(days>0 && days<=5) printf("Your total fine is 0.50 rupees");
//     else if(days>5 && days<=10) printf("Your total fine is 1.00 rupees");
//     else if(days>10 && days<30) printf("Your total fine is 5.00 rupees");
//     else printf("YourMembership is cancelled!!");
//     return 0;
// }



/******************* 9. WAP TO READ IN NUMBERS UNTIL THE NUMBER -999 IS ENCOUNTERED AND PTINTING SUM TILL THEN ********************/



// # include <stdio.h>
// int main() {
//     int num;
//     int sum=0;
//     printf("Enter a number : ");
//     scanf("%d",&num);
//     while(num!=(-999)){
//     printf("Again enter a number : ");
//     scanf("%d",&num);
//     sum+=num;
//    }
//    printf("%d",sum);
//     return 0;
// }




/******************* 10. WAP TO  READ IN NUMBERS UNTIL THE NUMBER IS GREATER THAN 100 ********************/



// # include <stdio.h>
// int main() {
//     int num;
//     printf("Enter a number : ");
//     scanf("%d",&num);
//     while(num<(100)){
//     printf("Again enter a number : ");
//     scanf("%d",&num);}
//    printf("Process completed");
//     return 0;
// }



/******************* 11. WAP TO READ IN 20 INTEGERS AND COUNT THE EVEN NUMBERS ********************/



// # include <stdio.h>
// int main() {
//     int num;
//     int count=0;
//     for(int i=1;i<=20;i++){
//     printf("Enter an integer : ");
//     scanf("%d",&num);
//     if(num%2==0){ count++;}}
//     printf("No. of even integers are %d",count);
//     return 0; }
































