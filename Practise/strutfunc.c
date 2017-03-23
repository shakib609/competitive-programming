#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
  char *name;
  int age;
} person;

person *allocate(void) {
  person *sample = (person *)malloc(sizeof(person));
  sample->name = malloc(sizeof(char) * 64);
  return sample;
}
void setStruct(person *input, char *name, int age) {
  strcpy(input->name, name);
  input->age = age;
}
void showStruct(person *input) {
  printf("Hello %s(%d)\n", input->name, input->age);
}
int main(void) {

  person *next = allocate();
  char *n = (char *)malloc(sizeof(char) * 64);
  int a = 0;
  puts("Please Enter your name");
  fgets(n, 64, stdin);
  puts("Please Enter your age");
  scanf("%d", &a);
  setStruct(next, n, a);
  showStruct(next);

  return 0;
}
