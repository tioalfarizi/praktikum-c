#include <stdio.h>
#include <string.h>

int main() {

   char username[20];
   char password[20];

   printf("Username: ");
   scanf("%s", username);

   printf("Password: ");
   scanf("%s", password);

   if (strcmp(username, "tio") == 0 && strcmp(password, "0223") == 0) {
       printf("Login berhasil\n");
   } else {
       printf("Login gagal\n");
   }

   return 0;
}
