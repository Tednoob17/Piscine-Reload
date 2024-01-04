## Understand and manipulate bash tests

### How to know if your command fail or not
	- Any bash code after execute return a code (0, 1), but others number who is not `0` precise that is fail.
	- This value is accessible via the variable `$?`.
**Ex:**
- Success
```bash
$ printf "%s\n" "salut"   #this line print salut
 salut
$ echo $?
0	#the answer of previous command (success/fail)
```
- Fail

```bash
$ printf "%d\n" "lllllllllllllllllllllllllll"
bash: printf: lllllllllllllllllllllllllll: invalid number

$ echo $?
1     #the of previous command (success/fail)
```

