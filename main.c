//
//  main.c
//  Coolness
//
//  Created by Cordavi on 1/15/16.
//  Copyright © 2016 Cordavi. All rights reserved.
//

#import <readline/readline.h>
#import <stdio.h>

int main(int argc, const char * argv[]) {
    
    printf("Who is cool? ");
    const char  *name = readline(NULL);
    printf("%s is cool!\n\n" ,name);
    
    
   /* int i;
    for (i =0; i < 12; i++) {
        if (i % 3 == 0) {
            continue;
        }
        printf("Checking i = %d\n", i);
        if (i + 90 ==i * i) {
            break;
        }
    }
    printf("The answer is %d. \n", i); */
    
    
   /* Example of how break works
    int i;
    for (i = 0; i < 12; i++) {
        printf("Checking i = %d\n", i);
        if (i +90 == i * i) {
            break;
        }
    }
    printf("The answer is %d. \n", i);*/
    
    /* For loop example
     for (int i =0; i <12; i++) {
        printf("%d. Aaron is Cool\n", i);
    } */
    
    /* First example of a while loop
    int i = 0;
    while (i <12) {
        printf("Aaron is Cool\n");
        i++;
    }*/
    return 0;
}
