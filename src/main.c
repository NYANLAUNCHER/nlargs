// nlargs for the shell
#include <stdio.h>
#include <stdlib.h>
#include "nlargs.h"

#define HELP_TEXT ""

int main(int argc, char** argv) {
    char** value;
    nl_arg args[3] = {
        {"arg", 'a', 0, 0, value, "", 0},
        {"arg1", 'b', 0, 0, value, "", 0},
        {"arg1", 'b', 0, 0, value, "", 0}
    };

    // Add some items
    for (int i=0;i<40;i++) {
        nl_addarg(args[0]);
        nl_addarg(args[1]);
        nl_addarg(args[2]);
    }

    printf("nl_argslist_size = %zu\n", nl_argslist_size);
    printf("nl_argslist_used = %zu\n\n", nl_argslist_used);

    for (int i=0; i<nl_argslist_used; i++)
        printf("%d = %s, %c\n", i, args[0].str, args[0].short_str);

    return 0;
}
