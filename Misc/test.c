#include <stdio.h>
#include<stdlib.h>
#include<string.h>


void InfixToPostfix(char infix_exp[], char postfix_exp[])


{


    int i, j;


    char item;


    char x;


 


    push('(');


    strcat(infix_exp,
")");


 


    i = 0;


    j = 0;


    item =
infix_exp[i];


    while (item !=
'\0')


    {


        if (item ==
'(') {


           
push(item);


        }


        else if
(isdigit(item) || isalpha(item)) {


           
postfix_exp[j] = item;


            j++;


        }


        else if
(is_operator(item) == 1)


        {


            x = pop();


            while
(is_operator(x) == 1 && precedence(x) >= precedence(item)) {


               
postfix_exp[j] = x;


                j++;


                x =
pop();


                }


            push(x);


           
push(item);


        }


        else if (item
== ')')


        {


            x = pop();


            while (x
!= '(')


            {


               
postfix_exp[j] = x;


                j++;


                x =
pop();


            }


        }


        else {


           
printf("\nInvalid infix Expression.\n");            getchar();


            exit(1);


        }


        i++;


 


        item =
infix_exp[i];


    }


        if (top >
0) {


       
printf("\nInvalid infix Expression.\n");


        getchar();


        exit(1);


    }