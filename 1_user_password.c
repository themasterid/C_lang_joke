/*
The first task. Check username and password.
If user input wrong password or username
sleep 3 seconds and input username and password again,
else if password and username is correct print Welcome and exit program.
If user input 5 wrong username and password exit program.
*/
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define MAX 16


int main (void) {
    const char *username = "user1", *password = "pass1";
    char input_username[MAX], input_password[MAX];
    int three_attempts = 0, five_attempts = 0, user_b, password_b;
    while (1) {
        printf("Enter username: ");
        scanf("%s", input_username);
        printf("Enter password: ");
        scanf("%s", input_password);
        user_b = strcmp(input_username, username);
        password_b = strcmp(input_password, password);
        if (user_b == 0 && password_b == 0) {
            printf("Welcome ADMIN!\n\n========\n");
            return 0;
        }
        printf ("User with such credentials was not found...\n");
        three_attempts++; // Accumulation of incorrect attempts.
        if (three_attempts == 3) {
            three_attempts = 0; // Zeroing three input attempts.
            printf("Waiting 3 secs ...\n");
            sleep(3); // We sleep for 3 seconds, hello bruteforce :)
        }
        five_attempts++; // Accumulation of incorrect attempts and exit when == 5.
        if (five_attempts == 5) {
            printf("Connection closed...\n");
            return 0;
        }
    }    
}
