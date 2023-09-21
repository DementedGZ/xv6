// Do not modify this file. It will be replaced by the grading scripts
// when checking your project.

#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    printf(1, "I'm a process with ID: %d\n", getpid());
    printf(1, "There are %d getpid() system calls.\n", FirstPart());
    printf(1, "There are %d system calls.\n", SecondPart());
    exit();
}
