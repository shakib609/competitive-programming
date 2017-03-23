#include <stdio.h>
#include <stdlib.h>

struct weather {
  char day[10];
  float temp;
};

int main(void) {

  struct weather week[7] = {
    { "Sunday", 72.5 },
    { "Monday", 68.4 },
    { "Tuesday", 75.0 },
    { "Wednesday", 73.8 },
    { "Thursday", 65.1 },
    { "Friday", 72.8 },
    { "Saturday", 75.2 }
  };

  int x, inner, outer;
  struct weather temp;

  /*Sorting begins here*/
  for(outer = 0; outer < 7; outer++) {
    for(inner = outer + 1; inner < 7; inner++) {
      if(week[inner].temp < week[outer].temp) {
        temp = week[inner];
        week[inner] = week[outer];
        week[outer] = temp;
      }
    }
  }
  /*Sorting ends here*/
  puts("This week's forecast:");
  for(x=0;x<7;x++)
    printf("%10s %.1f degrees\n",
            week[x].day,
            week[x].temp);

return(0);
}

