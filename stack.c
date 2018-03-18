/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   stack.c
 * Author: vojtech
 * 
 * Created on 18. března 2018, 19:41
 */

#include <stdlib.h>

#include "stack.h"
void resize(t_stack * stack);
//inicializace noveho stacku
void stackInit(t_stack * stack){
    stack->m_size = INITSIZE;
    stack->m_len = 0;
    stack->m_arr = (char*) malloc(INITSIZE * sizeof(char));
}
//vrati 1 pokud je stack prazdny a 0 pokud ne
int stackEmpty(t_stack * stack){
    return stack->m_len == 0;
}
//push noveho prvku
void stackPush(t_stack * stack, char item){
    if(stack->m_len == stack->m_size) {
        resize(stack);
    }
    stack->m_arr[stack->m_len++] = item;
}

//vraci prvek na vrcholu stacku
char stackTop(t_stack * stack){
    return stack->m_arr[(stack->m_len) - 1];
}

//uvoln9 prvek na vrcholu stacku
void stackPop(t_stack * stack){
    stack->m_len--;
}

//deinicializace
void stackDestroy(t_stack * stack){
    free(stack->m_arr);
}

void resize(t_stack * stack){
    stack->m_size += stack->m_size / 2;
    stack->m_arr = (char*) realloc(stack->m_arr, stack->m_size * sizeof(char));
}
