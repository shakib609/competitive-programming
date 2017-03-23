#include<stdio.h>
#include<string.h>

typedef struct {
  int zip_code;
  char street_name[50];
  char country[50];
} address;

typedef struct {
  char name[50];
  address permanent;
  address present;
} person;

int main(void) {
  person me;
  strcpy(me.name, "Shakib");
  strcpy(me.present.street_name, "Nazu Meah Lane");
  strcpy(me.present.country, "Bangladesh");
  me.present.zip_code = 4000;
  strcpy(me.permanent.street_name, "Patiya, Kaigram");
  strcpy(me.permanent.country, "Bangladesh");
  me.permanent.zip_code = 6969;

  printf("This is %s's present address.\n", me.name);
  printf("%s - %d, %s\n", me.present.street_name, me.present.zip_code,
                          me.present.country);
  printf("This is %s's permanent address.\n", me.name);
  printf("%s - %d, %s\n", me.permanent.street_name, me.permanent.zip_code,
                          me.permanent.country);

  return 0;
}
