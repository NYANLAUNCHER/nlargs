// Include this into your program
#ifndef _NLARGS_H
#define _NLARGS_H
#define NL_VERSION "0.0"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

// The settings for nl_args
typedef struct nl_settings{
    // tell nl args if it should manage functions
    int handle_funcs;
}nl_settings;
// Settings to apply across all nl_args.
nl_settings nl_config;

// Define a nl_argument and how to search for it.
typedef struct nl_arg {
    char* str;
    char short_str;
    // the amt of strings it takes as a value
    int vals;
    // allow nl args to modify str
    // if != 0 nl args looks for the exact string str is equal to
    /// instead of adding a "--" to the front of it
    /// and substituting whitespace for '-'
    int modify_str;
    // its value
    // handled by nl args
    char** value;
    // the function it was called in
    // can be specified manually
    char* func;
    // where it is relative to the func
    // if > 0, arg was found
    // handled by nl args
    int pos;
}nl_arg;

// Store all args to search for
// see: "https://stackoverflow.com/questions/3536153/c-dynamically-growing-array"
nl_arg* nl_argslist;
// Don't mess with this unless you want segfaults
// the last used index
size_t nl_argslist_used;
// Don't mess with this unless you want segfaults
size_t nl_argslist_size;

// Add an argument to search for
// won't take an arg if both str and short_str is empty
void nl_addarg(nl_arg arg) {
    size_t init_size = 10;
    if (arg.str[0] == '\0' && arg.short_str == '\0')
        printf("nl_addargs(), Invalid argument:\n  Both str and short_str are empty.\n");
    else {
        nl_argslist = (nl_arg *)realloc(nl_argslist, (sizeof(nl_arg) * nl_argslist_used+1));
        nl_argslist[++nl_argslist_used] = arg;
    }
}

// Check for args in an array
// returns the indexes of the args it found
int* nl_getargs(int argc, char** argv) { int* rtval;
    return rtval;
}

// Check if an arg exists in nl_argslist
// returns its index or -1
int nl_hasarg(nl_arg arg) { int rtval = -1;
    return rtval;
}

#endif
