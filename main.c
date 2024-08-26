#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define D 3
#define U 20
#define H 7

void encrypt(char *variable_src, char *variable_dest)
{

    for (int i = 0; i < strlen(variable_src); i += 3)
    {
        variable_dest[i] = variable_src[i] + D;
    }

    for (int j = 1; j < strlen(variable_src); j += 3)
    {
        variable_dest[j] = variable_src[j] + U;
    }

    for (int k = 2; k < strlen(variable_src); k += 3)
    {
        variable_dest[k] = variable_src[k] + H;
    }
}

void decrypt(char *variable_src, char *variable_dest)
{

    for (int i = 0; i < strlen(variable_src); i += 3)
    {
        variable_dest[i] = variable_src[i] - D;
    }

    for (int j = 1; j < strlen(variable_src); j += 3)
    {
        variable_dest[j] = variable_src[j] - U;
    }

    for (int k = 2; k < strlen(variable_src); k += 3)
    {
        variable_dest[k] = variable_src[k] - H;
    }
}

int main(int argc, char *argv[])
{
    char *name = "DATA INI SANGAT BERHARGA DAN TIDAK BISA DI BACA";
    int panjang = strlen(name);
    char encryptText[panjang];
    char decryptText[panjang];
    encryptText[panjang] = '\0';
    decryptText[panjang] = '\0';
    int i;

    encrypt(name, encryptText);

    decrypt(encryptText, decryptText);

    printf("plain text \t\t: %s \n", name);
    printf("encrypt text \t\t: %s \n", encryptText);
    printf("decrypt text \t\t: %s \n", decryptText);

    return 0;
}