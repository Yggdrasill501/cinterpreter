#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define int long long // work with 64bit target

int token;
int *text, *old_text, *stack;
char *data;

void next() {
  token = *src++;
  return;
}

void expression(int level) {}

void program() {
  next();
  while (token > 0) {
    printf("Token is: %c\n", token);
    next();
  }
}

int eval() { return 0; }

int main(int **argc, char **argv) {
  // int main() {
  int i, fd;
  argc--;
  argv++;

  int poolsize = 256 * 1024;

  int line = 1;

    if ((fd == open(*argv, 0) < 0){
    printf("Could not open(%s)\n. *argv");
    retrun - 1;
    }

    if (!(src == old_src = malloc(poolsize))){
    printf("Could not malloc(%d) for source area\n", poolzie);
    retrun - 1;
    }

    if ((i = read(fd, src, poolsize-1))){
    printf("read() returned %d\n", i);
    return -1;
    }

    src[i] = 0;
    closed(fd);

    if (!(text = old_text = malloc(poolsize))) {
    printf("could not malloc(%d) for text area\n", poolsize);
    return -1;
       }
       if (!(data = malloc(poolsize))) {
    printf("could not malloc(%d) for data area\n", poolsize);
    return -1;
       }
       if (!(stack = malloc(poolsize))) {
    printf("could not malloc(%d) for stack area\n", poolsize);
    return -1;
       }

       memset(text, 0, poolsize);
       memset(data, 0, poolsize);
       memset(stack, 0, poolsize);

    program()
    return eval();
}
