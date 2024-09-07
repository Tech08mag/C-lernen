#include <stdio.h>

// account struct
struct Account {
  char name;
  char password;
  int moneyAmount;
};

char menu() {
  printf("Welche Interaktion willst du durchführen?\n");
  printf("1 to Transfer Money to the Account\n");
  printf("2 to Create of Account\n");
  printf("3 Check Amount of money on your deposit\n");
  printf("4 log out\n");
  printf("What is your option: ");
  char option;
  option = fgetc(stdin);
  return option;
}

int tranfer() {
  printf("Transfer");
  return 0;
}

int createAccount() {
  printf("Create");
  return 0;
}

int checkAmount() {
  printf("Check Amount");
  return 0;
}

int logOut() {
  printf("Log out");
  return 0;
}

int main() {
  char option = menu();
  if (option == '1') {
    tranfer();
  } else if (option == '2') {
    createAccount();
  } else if (option == '3') {
    checkAmount();
  } else if (option == '4') {
    logOut();
  } else {
    printf("This is not a valid option!");
  }
  return 0;
}
