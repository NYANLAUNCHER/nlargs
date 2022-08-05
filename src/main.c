// nlargs for the shell
#include <stdio.h>
#include <stdlib.h>
#include "nlargs.h"

#define HELP_TEXT ""

int main(int argc, char** argv) {
    char** value;
    nl_arg arg = {"arg", 'a', 0, value, "", 0, 0};
    nl_arg arg1 = {"arg1", 'b', 0, value, "", 0, 0};
    nl_arg arg2 = {"arg2", 'c', 0, value, "", 0, 0};

    return 0;
}
