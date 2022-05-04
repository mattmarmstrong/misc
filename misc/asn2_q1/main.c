#include <stdio.h>

int main() {
    //initializations
    int passcode;
    int secretcode = 0;
    int remainder;
    printf(" Enter a 6 digit number to receive your secret code:");

    //Scan the 6 digit code and save it at the address reserved for passcode variable
    scanf("%d",&passcode);
    while (passcode != 0) {
        remainder = passcode % 10;
        secretcode = secretcode * 10 + remainder;
        passcode /= 10;
    }
    printf("Your secret code is %d", secretcode);
    return 0;
}
