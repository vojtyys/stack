/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   stack.h
 * Author: vojtech
 *
 * Created on 18. března 2018, 19:41
 */

#ifndef STACK_H
#define STACK_H
#include <stdlib.h>
#define INITSIZE 50
//Definovani typu t_stack
typedef struct stack{
    size_t m_size;
    size_t m_len;
    char * m_arr;
} t_stack;

//inicializace noveho stacku
void stackInit(t_stack * stack);
//vrati 1 pokud je stack prazdny a 0 pokud ne
int stackEmpty(t_stack * stack);
//push noveho prvku
void stackPush(t_stack * stack, char item);

//vraci prvek na vrcholu stacku
char stackTop(t_stack * stack);

//uvoln9 prvek na vrcholu stacku
void stackPop(t_stack * stack);

//deinicializace
void stackDestroy(t_stack * stack);

#endif /* STACK_H */
