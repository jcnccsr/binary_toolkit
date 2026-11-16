#include <stddef.h>
#include <stdio.h>

int ft_strcmp(char *s, char *t);
size_t ft_strlen(char *s);
size_t ft_strdec(char *s);
size_t ft_chrdec(char s);
void dec_to_bin(char *s);

int main(void) {
  printf("Welcome to Binary Toolkit!\n");
  printf("This is a command-line utility in C \nthat helps you convert numbers between \ndecimal, binary, and hexadecimal representations.\n");

  char choice[2];
  printf("Select a conversion operation:\n");
  printf("  1. Decimal-to-binary\n");
  printf("  2. Decimal-to-hexadecimal\n");
  printf("  3. Binary-to-decimal.\t\t");

  fgets(choice, sizeof(choice),stdin);

  if (ft_strcmp(choice, "1")) {
    printf("\nchoice: %s\n", choice);
  }
  else {
    printf("\nchoice: !%s\n", choice);
  }

  int choice_as_int = ft_strdec(choice);
  printf("Choice as int: %d\n", choice_as_int * 10);

  dec_to_bin("9876543210");
  return 0;
}

size_t ft_strlen(char *s) {
  size_t i = 0;
  while (*s != '\0') {
    s++;
    i++;
  }
  return i;
}

int ft_strcmp(char *s, char *t) {
  while (*s != '\0' && *s == *t) {
   s++;
   t++;
  }
  return *s == *t;
}
size_t ft_strdec(char *s) {
  char *numbers[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
  size_t i = 0;
  while (i < 10 && (!ft_strcmp(s, numbers[i]))) {
    i++;
  }
  return i;
}
size_t ft_chrdec(char s) {
  char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  size_t i = 0;
  while (i < 10 && s != numbers[i]) {
    i++;
  }
  return i;
}

void dec_to_bin(char *s) {
  size_t position = ft_strlen(s);
  // Convert decimal to binary
  // Create an array of the ints
  position--;
  position--;
  int digits[position];
  while (position > 0) {
    digits[position] = ft_chrdec(s[position]);
    printf("%d\n", digits[position]);
    position--;
  }
}
