#include<stdio.h>
void main(){ 
    /* 10 x 10 star pattern.....

    * * * * * * * * * * 
    * * * * * * * * * * 
    * * * * * * * * * *   
    * * * * * * * * * *   
    * * * * * * * * * *   
    * * * * * * * * * *   
    * * * * * * * * * *   
    * * * * * * * * * *   
    * * * * * * * * * *   
    * * * * * * * * * *   
    */
    // for (int i = 1; i <= 10; i++){
    //     for (int j = 1; j <= 10; j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    
    /* to print.....

    *
    * *
    * * *
    * * * *
    * * * * *
    
    */
    // for (int i = 1; i <= 5; i++){
    //     for (int j = 1; j <= i; j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    
    /* to print......

    * * * * *
    * * * *
    * * *
    * *
    * 
   
    */
//    for (int i = 1; i <= 5; i++){
//         for (int j = 0; j <= 5-i; j++){
//             printf("* ");
//         }
//         printf("\n");
//    }
    /*
            *
          * *
        * * *
      * * * *
    * * * * *
        
    */
    // for (int i = 1; i <= 10; i++){
    //     for (int j = 1; j <= 10-i; j++){
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= i; k++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }



    /*
                *
               * *
              * * *
             * * * *
            * * * * *
    */
    // for (int i = 1; i <= 10; i++){
    //     for (int j = 1; j <= 10-i; j++){
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= i; k++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    /*
               * *
             * * * *
           * * * * * *
         * * * * * * * *
       * * * * * * * * * *
    */
    // for (int i = 1; i <= 10; i++){
    //     for (int j = 1; j <= 10-i; j++){
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= 2*i; k++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    /*
                *
              * * *
            * * * * *
          * * * * * * *
        * * * * * * * * *
    */
//    for (int i = 1; i <= 10; i++){
//         for (int j = 1; j <= 10-i; j++){
//             printf(" ");
//         }
//         for (int k = 1; k <= 2*i-1; k++){
//             printf("*");
//         }
//         printf("\n");
//     }

    /*
    * * * * *
     * * * *
      * * *
       * *
        *
    */
//    for (int i = 1; i <= 10; i++){
//         for (int j = 1; j <= i-1; j++){
//             printf(" ");
//         }
//         for (int k = 1; k <= 10-i+1; k++){
//             printf("* ");
//         }
//         printf("\n");
//    }

    /*
          * * * * * * * * * *
            * * * * * * * *
              * * * * * *
                * * * *
                  * *
    */
//     for (int i = 1; i <= 10; i++){
//         for (int j = 1; j <= i-1; j++){
//             printf(" ");
//         }
//         for (int k = 1; k <= 10-2*i+2; k++){
//             printf("*");
//         }
//         printf("\n");
//    }

    /*
    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *
    */
//    for (int i = 1; i <= 10; i++){
//         for (int j = 1; j <= i-1; j++){
//             printf(" ");
//         }
//         for (int k = 1; k <= 10-2*i+1; k++){
//             printf("*");
//         }
//         printf("\n");
//    }

    /*
        *
       * *
      * * *
     * * * *
    * * * * *
     * * * *
      * * *
       * *
        *
    */
  //  for (int i = 1; i <= 10; i++){
  //       for (int j = 1; j <= 10-i; j++){
  //           printf(" ");
  //       }
  //       for (int k = 1; k <= i; k++){
  //           printf("* ");
  //       }
  //       printf("\n");
  //  }

   /* using 1st logic for lower inverted triangle*/

  //  for (int l = 1; l <= 10; l++){
  //       for (int m = 1; m <= l; m++){
  //           printf(" ");
  //       }
  //       for (int n = 1; n <= 10-l; n++){
  //           printf("* ");
  //       }
  //       printf("\n");
  //  }

  /* using 2nd logic for lower inverted triangle*/

  //  for (int l = 9; l >= 0; l--){
  //       for (int m = 1; m <= 10-l; m++){
  //           printf(" ");
  //       }
  //       for (int n = 1; n <= l; n++){
  //           printf("* ");
  //       }
  //       printf("\n");
  //  }
   
}