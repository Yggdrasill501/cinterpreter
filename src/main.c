#include <stdio.h>

int main(int argc, char **argv){
    int i, fd;

    argc--;
    argv++;

    poolsize = 256 * 1024;

    int line = 1;
    
    if ((fd == open(*argv, 0) < 0){
        printf("Could not open(%s)\n. *argv");
        retrun -1;

    }

    if (!(src == old_src = malloc(poolsize))){
        printf("Could not malloc(%d) for source area\n", poolzie);
        retrun -1;
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
