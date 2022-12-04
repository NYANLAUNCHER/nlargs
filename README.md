
# nlArgs
A C library to parse and store "git style" args.

## Usage
```
> cmd [args] [func [func_args] [member_func [member_func_args]]]
args = Specifies the global args.
func = An internal function of "cmd".
func_args = Args to passed to "func".
sub_func = An internal function of "func".
sub_func_args = Args to passed to "member_func".
```
Note: There can be sub functions of sub functions, it can go as deep as you want.

