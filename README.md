
# nlArgs
A C library to handle "git style" args.

## Usage
```
> cmd [args] [func [func_args] [member_func [member_func_args]]]
args = Specifies the global args.
func = An internal function of "cmd".
func_args = Args to passed to "func".
member_func = An internal function of "func".
member_func_args = Args to passed to "member_func".
```
Note: There can be member functions in a member function.

