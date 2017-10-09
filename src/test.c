#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int __attribute__((cdecl)) sum1(int a, int b){
    return a+b;
}

int __attribute__((stdcall)) sum2(int a, int b){
    return a+b;
}

int __attribute__((fastcall)) sum3(int a, int b){
    return a+b;
}

int  main(int argc, char *argv[]){
    // calling convention
    int a = 2;
    int b = 3;

    sum1(a,b);
    sum2(a,b);
    sum3(a,b);

    // endianess
    int c = 0x41424344;
    printf("%x\n",c);

    // syscall
    int fd = open("test.c", O_RDONLY);
    char buf[10];
    read(fd, buf, 8);
    write(0, buf, 8);
    write(0, "\n", 1);
    close(fd);

    return 0;
}

