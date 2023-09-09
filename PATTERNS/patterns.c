#include<stdio.h>
void main(){
    int rows,column;







                           //    Pattern 1     \\ 

// *
// **
// ***
// ****



    // for(rows=0;rows<4;rows++){ 
    //     for(column=0;column<=rows;column++){
    //         printf("*");
    //     }
    //     printf("\n");
    //}











                                                     //    Pattern 2    \\ 

// *****
// *****
// *****
// *****


    // for(rows=0;rows<4;rows++){ 
    //     for(column=0;column<=4;column++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    







                                                              //    Pattern 3    \\ 

// ****
// ***
// **
// *

    // for(rows=0;rows<4;rows++){ 
    //     for(column=0;column<4-rows;column++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

//    or 


    //     for(rows=1;rows<=4;rows++){ 
    //     for(column=1;column<=4+1-rows;column++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }









                                                              //    Pattern 4    \\ 

// 1
// 12
// 123
// 1234

        // for(rows=1;rows<=4;rows++){ 
        // for(column=1;column<=rows;column++){
        //     printf("%d ",column);
        // }
        // printf("\n");







                                                              //    Pattern 5    \\ 



// *
// **
// ***
// ****
// ***
// **
// *


// for(rows=1;rows<2*4;rows++){
//      int colINrow = rows>4? (2*(4) -rows) : rows;
//      for(column=0;column<colINrow;column++){
//         printf("*");
//     }
//     printf("\n");




















    }
}