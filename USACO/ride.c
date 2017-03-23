/*
ID: shakib61
LANG: C
TASK: ride
*/
#include <stdio.h>
#define LEN 128
int main(void) {
  FILE *fin  = fopen ("ride.in", "r");
  FILE *fout = fopen ("ride.out", "w");
  char comet_name[LEN], group_name[LEN];
  int comet_product = 1, group_product = 1;
  int i, j;
  fscanf(fin, "%s %s", comet_name, group_name);
  for(i = 0; i < LEN; i++) {
    if(comet_name[i] != '\0')
      comet_product *= comet_name[i] - 64;
    else
      break;
  }
  for(i = 0; i < LEN; i++)
  {
    if(group_name[i] != '\0')
      group_product *= group_name[i] - 64;
    else
      break;
  }
  group_product %= 47;
  comet_product %= 47;

  if(group_product == comet_product)
    fprintf(fout, "GO\n");
  else
    fprintf(fout, "STAY\n");

  fclose(fin);
  fclose(fout);
  return 0;
}
