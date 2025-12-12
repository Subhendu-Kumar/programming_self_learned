public class star_patterns {
    public static void main(String[] args) {
        
        // square star pattern

        // for (int i = 0; i < 10; i++) {
        //     for (int j = 0; j < 10; j++) {
        //         System.out.print("* ");
                
        //     }
            
        //     System.out.println();
        // }

        // square patterns with numbers 1

        // for (int i = 0; i < 10; i++) {
        //     for (int j = 0; j < 10; j++) {
        //         System.out.print(j+" ");
                
        //     }
            
        //     System.out.println();
        // }

        // square patterns with number 2

        // for (int i = 0; i < 10; i++) {
        //     for (int j = 0; j < 10; j++) {
        //         System.out.print(9-j + " ");
                
        //     }            

        //     System.out.println();
        // }

        // square patterns with numbers 3

        // for (int i = 0; i < 10; i++) {
        //     for (int j = 0; j < 10; j++) {
        //         System.out.print(i+" ");
                
        //     }
            
        //     System.out.println();
        // }

        // square patterns with number 4

        // for (int i = 0; i < 10; i++) {
        //     for (int j = 0; j < 10; j++) {
        //         System.out.print(9-i + " ");
                
        //     }            

        //     System.out.println();
        // }

        // square pattern with alphabet 1

        // for (int i = 0; i < 10; i++) {
        //     for (int j = 0; j < 10; j++) {
        //         System.out.print((char)(65+j)+" ");        
        //     }

        //     System.out.println();
        // }

        // square pattern with alphabet 2

        // for (int i = 0; i < 10; i++) {
        //     for (int j = 0; j < 10; j++) {
        //         System.out.print((char)(65+i)+" ");        
        //     }

        //     System.out.println();
        // }


        /*
        print this
         *
         * *
         * * *
         * * * *
         * * * * *
        
         */

        // for (int i = 1; i <= 10 ; i++) {
        //     for (int j = 1; j <= i; j++) {
        //         System.out.print("* ");           
        //     }            

        //     System.out.println();
        // }

        /*
        print this 
                 *
               * *
             * * *
           * * * *
         * * * * *
         */

        //  for (int i = 1; i <= 10; i++) {
        //     for (int j = 1; j <= 10 - i; j++) {
        //         System.out.print(" ");               
        //     }
        //     for (int k = 1; k <= i; k++) {
        //         System.out.print("*");                
        //     }

        //     System.out.println();
            
        //  }


        /*
        print this
         * * * * * * *
           * * * * * *
             * * * * *
               * * * *
                 * * *
                   * *
                     * 
         */

        //  for (int i = 10; i >= 1; i--) {
        //     for (int j = 1; j <= 10 - i; j++) {
        //         System.out.print(" ");                
        //     }
        //     for (int k = 1; k <= i; k++) {
        //         System.out.print("*");
        //     }

        //     System.out.println();
        //  }


        /*
        print this
         * * * * * *
         * * * * *
         * * * *
         * * *
         * *
         * 
         */

        // for (int i = 1; i <= 10; i++) {
        //     for (int j = 1; j <= 10 - i; j++) {
        //         System.out.print("* ");                
        //     }
            
        //     System.out.println();
        // }


        /*
        print this
                *
               * *
              * * *
             * * * *
            * * * * * 
         */

        // for (int i = 1; i <= 10; i++) {
        //     for (int j = 1; j <= 10 - i; j++) {
        //         System.out.print(" ");                
        //     }
        //     for (int k = 1; k <= i; k++) {
        //         System.out.print("* ");                
        //     }

        //     System.out.println();
        // }

        //previous pattern with even number of stars
        // for (int i = 1; i <= 10; i++) {
        //     for (int j = 1; j <= 10 - i; j++) {
        //         System.out.print(" ");                
        //     }
        //     for (int k = 1; k <= 2*i; k++) {
        //         System.out.print("*");                
        //     }

        //     System.out.println();
        // }

        
        //previous pattern with odd number of stars
        // for (int i = 1; i <= 10; i++) {
        //     for (int j = 1; j <= 10 - i; j++) {
        //         System.out.print(" ");                
        //     }
        //     for (int k = 1; k <= (2*i - 1); k++) {
        //         System.out.print("*");                
        //     }

        //     System.out.println();
        // }
        

        /*
        print this
         * * * * * * *
          * * * * * *
           * * * * *
            * * * *
             * * *
              * *
               *
         */
        
        // for (int i = 10; i >= 1; i--) {
        //     for (int j = 1; j <= 10 - i; j++) {
        //         System.out.print(" ");
        //     }
        //     for (int k = 1; k <= i; k++) {
        //         System.out.print("* ");
        //     }

        //     System.out.println();
        // }

        // previous pattern with even number of stars
        // for (int i = 10; i >= 1; i--) {
        //     for (int j = 1; j <= 10 - i; j++) {
        //         System.out.print(" ");
        //     }
        //     for (int k = 1; k <= 2*i; k++) {
        //         System.out.print("*");
        //     }

        //     System.out.println();
        // }


        // previous pattern with odd number of stars
        // for (int i = 10; i >= 1; i--) {
        //     for (int j = 1; j <= 10 - i; j++) {
        //         System.out.print(" ");
        //     }
        //     for (int k = 1; k <= (2*i - 1); k++) {
        //         System.out.print("*");
        //     }

        //     System.out.println();
        // }

        /*
        print this
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

        // for (int i = 1; i <= 10; i++) {
        //     for (int j = 1; j <= 10 - i; j++) {
        //         System.out.print(" ");
        //     }
        //     for (int k = 1; k <= i; k++) {
        //         System.out.print("* ");
        //     }
        //     System.out.println();
        // }

        // for (int i = 10-1; i >= 0; i--) {
        //     for (int j = 1; j <= 10 - i; j++) {
        //         System.out.print(" ");
        //     }
        //     for (int k = 1; k <= i; k++) {
        //         System.out.print("* ");
        //     }

        //     System.out.println();
        // }


        /*
        print this
         * * * * * * * * * *
         * * * * * * * * * *
         * * * * * * * * * *
         * * * * * * * * * *
         * * * * * * * * * *
               * * * *
               * * * *
               * * * *
               * * * *
               * * * *
         */

        // for (int i = 1; i <= 5; i++) {
        //     for (int j = 1; j <= 10; j++) {
        //         System.out.print("*");
        //     }            

        //     System.out.println();
        // }

        // for (int i = 1; i <= 5; i++) {
        //     for (int j = 1; j <= 3; j++) {
        //         System.out.print(" ");
        //     }
        //     for (int k = 1; k <= 4; k++) {
        //         System.out.print("*");
        //     }

        //     System.out.println();
        // }


        /*
        print this
        *
       * *
      * * *
     * * * *
    * * * * *
   * * * * * *
  * * * * * * *
 * * * * * * * *
      * * *
      * * *
      * * *
      * * *
      * * *
      * * *
      * * *
         */

        // for(int i = 0; i < 8; i++){
        //     for(int j = 0; j < (8 - i); j++){
        //         System.out.print(" ");
        //     }
        //     for(int k = 0; k <= i; k++){
        //         System.out.print("*"+" ");
        //     }
        //     System.out.println();
        // }

        // for(int i = 0; i < 7; i++){
        //     for(int j = 0; j < 3; j++){
        //         System.out.print(" "+" ");
        //     }
        //     for(int k = 0; k < 3; k++){
        //         System.out.print("*"+" ");
        //     }
        //     System.out.println();
        // }

    }
    
}
