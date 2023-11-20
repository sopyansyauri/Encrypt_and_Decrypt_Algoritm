#include <stdio.h>
#include <string.h>


#define D 3
#define U 20
#define H 7

void encrypt(char data[], char data2[]) {

    for (int i = 0; i < strlen(data); i += 3) {
        data2[i] = data[i] + D;
    }

    for (int j = 1; j < strlen(data); j += 3) {
        data2[j] = data[j] + U;
    }

    for (int k = 2; k < strlen(data); k += 3) {
        data2[k] = data[k] + H;
    }

}

void decrypt(char data[], char data2[]) {

    for (int i = 0; i < strlen(data); i += 3) {
        data2[i] = data[i] - D;
    }

    for (int j = 1; j < strlen(data); j += 3) {
        data2[j] = data[j] - U;
    }

    for (int k = 2; k < strlen(data); k += 3) {
        data2[k] = data[k] - H;
    }

}

int main(void) {
    char name[] = "data berharga";
    char encryptText[sizeof(name)];
    char decryptText[sizeof(name)];

    encrypt(name, encryptText);

    decrypt(encryptText, decryptText);


    printf("plain text \t\t: %s \n", name);
    printf("encrypt text \t\t: %s \n", encryptText);
    printf("decrypt text \t\t: %s \n", decryptText);




    return 0;
}