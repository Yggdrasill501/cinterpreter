#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define int long long // work with 64bit target

int token;

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

int main(int argc, char **argv) {
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
    program()
    return eval();
}