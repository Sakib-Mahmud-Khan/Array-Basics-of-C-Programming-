#include<stdio.h>
#include<string.h>
void salting(char password[]);

int main(){
    char password[100];
    scanf("%s",password);
    
      salting(password);

}
void salting(char password[]){
    char salt[]="123";
    char newpassword[200];

    strcpy(newpassword,password); //copy the password into the new password
    strcat(newpassword,salt);  //new password = test + 123
    puts(newpassword);

}