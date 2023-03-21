#include<unistd.h>

/**_putchar char c to stdout 
  *
  *return is 1 .
  *error return : -1 .
  */ 
  int _putchar(char c){
  return (write(1, &c, 1));

}
