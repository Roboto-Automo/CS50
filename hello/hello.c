#include <stdio.h>
#include <cs50.h>
// #include <cs50.c>

int main(void)
{
    
  string name = get_string("What's your name? ");
  string name2 = get_string("What's your surname? ");
  int age = get_int("How old are you? ");
  string smalltalk = get_string("How are you? ");
   printf("hello, %s %s!\n", name, name2);
    printf("You are %i years old!\n", age);
    printf("%s!\n", smalltalk);
}