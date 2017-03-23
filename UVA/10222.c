#include<stdio.h>
#include<ctype.h>

int main(void) {

  char input;
  while((input = getchar()) > 0) {
    if(input == '\n')
      break;
    input = tolower(input);
    switch(input) {
      case 'e':
        putchar('q');
        break;
      case 'd':
        putchar('a');
        break;
      case 'c':
        putchar('z');
        break;
      case 'r':
        putchar('w');
        break;
      case 'f':
        putchar('s');
        break;
      case 'v':
        putchar('x');
        break;
      case 't':
        putchar('e');
        break;
      case 'g':
        putchar('d');
        break;
      case 'b':
        putchar('c');
        break;
      case 'y':
        putchar('r');
        break;
      case 'h':
        putchar('f');
        break;
      case 'n':
        putchar('v');
        break;
      case 'u':
        putchar('t');
        break;
      case 'j':
        putchar('g');
        break;
      case 'm':
        putchar('b');
        break;
      case 'i':
        putchar('y');
        break;
      case 'k':
        putchar('h');
        break;
      case ',':
        putchar('n');
        break;
      case 'o':
        putchar('u');
        break;
      case 'l':
        putchar('j');
        break;
      case '.':
        putchar('m');
        break;
      case 'p':
        putchar('i');
        break;
      case ';':
        putchar('k');
        break;
      case '/':
        putchar(',');
        break;
      case '[':
        putchar('o');
        break;
      case '\'':
        putchar('l');
        break;
      case ']':
        putchar('p');
        break;
      case ' ':
        putchar(' ');
        break;
    }
  }
  putchar('\n');
  return 0;
}
