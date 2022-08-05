// Include this into your program
#ifndef _NLARGS_H
#define _NLARGS_H
#define NL_VERSION "0.0"
#include <stdlib.h>

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
    // its value
    // handled by nl args
    char** value;
    // the function it was called in
    // handled by nl args
    char* func;
    // where it is relative to the func
    // handled by nl args
    int pos;
    // allow nl args to modify str
    // if != 0 nl args looks for the exact string str is equal to
    /// instead of adding a "--" to the front of it
    int modify_str;
}nl_arg;

// Store all args to search for
// each index = "<str>\n<short_str>\n<vals>\n<value>\n<func>\n<pos>\n<modify_str>"
// see: "https://stackoverflow.com/questions/3536153/c-dynamically-growing-array"
// see: "https://stackoverflow.com/questions/10468128/how-do-you-make-an-array-of-structs-in-c"
nl_arg* nl_argslist;

// Add arguments to search for
// won't take an arg if both str and short_str is empty
void nl_addargs(nl_arg arg, ...) {
}

// Check for args in an array
void nl_getargs(int argc, char** argv) {
}

// Return an arg from nl_argslist
nl_arg nl_findarg(nl_arg arg) {
    nl_arg rtval;
    return rtval;
}

// Check if an arg exists in nl_argslist
int nl_hasarg(nl_arg arg) {
    return 0;
}

#endif
