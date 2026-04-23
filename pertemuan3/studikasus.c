<<<<<<< HEAD
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
=======
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
>>>>>>> 87a76dca35f8a380b35d9f5377d4af03b6fc5966
