// No caso do Brasil, esse código não serve para identificar o número de caracteres
// Esse código calcula a quantidade de bytes em cada string
// Para palavras acentuadas, cada letra com acento equivale a 2 bytes, logo a contagem vai ser de n letras + 2(i-1) letras com acento

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int string_length(string name);

int main(void)
{
    string name = get_string("Name: ");
    int length = strlen(name);
    printf("%i\n", length);
}
