//structure is a user defined data type

#include<stdio.h>
   struct book{
        char name[10];
        float price;
        int pages;}

void main(){
    struct book b[3];
    printf("enter booj name,price and pages ");
    for(int i=0;i<3;i++){
            scanf("%s%f%d", &b[i].name,&b[i].price,&b[i].pages);

    }
       for(int i=0;i<3;i++){
            printf("%s%f%d", b[i].name,b[i].price,b[i].pages);

    }
 

    struct book c;//here b is a variable of struct or as we say a class of "book"
    printf("enter book name price and pages");
    scanf("%s%f%d", &c.name,&c.price,&c.pages);
    printf("book details are ");
    printf("%s%f%d", c.name,c.price,c.pages);


    
   
    
}