#include "stdio.h"
#include "stdlib.h"
#include "config.h"
#include "mylib.h"

int main(int argc, char * argv[]){
    if(argc < 2){
        fprintf(stdout,"Usage:%s num of argc]n",argv[0]);
        return 1;
    }
    mylib();
    fprintf(stdout,"Hello CMake VERSION_MAJOR=%d!\n",CMAKE_TEST_VERSION_MAJOR);
    return 0;
}