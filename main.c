/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: vojtech
 *
 * Created on 18. března 2018, 19:40
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/*
 * 
 */
int main(int argc, char** argv) {
    t_stack stack;
    stackInit(&stack);
    printf("%d\n", stackEmpty(&stack));
    for(int i = 0; i < 300; ++i){
        stackPush(&stack, 'a');
    }
    printf("%d\n", stackEmpty(&stack));
    for(int i = 0; i < 300; ++i){
        printf("%c\n", stackTop(&stack));
        stackPop(&stack);
    }
    printf("%d\n", stackEmpty(&stack));
    stackPush(&stack, 'a');
    stackPop(&stack);
    stackPush(&stack, 'b');
    printf("%c\n", stackTop(&stack));
    stackDestroy(&stack);

    return (EXIT_SUCCESS);
}

