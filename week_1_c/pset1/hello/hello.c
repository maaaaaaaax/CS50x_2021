#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt a user for their name
    string name = get_string("What is your name?\n");

    // Greet a user by name
    printf("hello, %s\n", name);
}