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
### What is test and how to use them
	- One test is a opration who evaluate the state of an ressources by compare it with reference state
	- The answer test is in `$?` variable
	- We have differents test category in function of testing ressources



### What is synthax used for realise the tests

-  We have 4 differents synthaxs
	* 1st synthax : `test` command 
```bash
$ which ls
/usr/bin/ls
$test -h /us/bin/ls ;echo $? #-h option verify if `ls` is a symbolic link file
1   #answer of previous command so `ls` is not a symbolic link file
```

	* 2nd synthax: `[..]` 

```bash
[ -h /usr/bin/ls ];echo $? #-h option verify if `ls` is a symbolic link file
1 #answer of previous command so `ls` is not a symbolic link file
```

	* 3rd synthax: `[[..]]`
```bash
[[ -f /usr/bin/ls ]];echo $? #-f verify if `ls` is a regular file 
0 
```

	* 4th synthax: `((...))` 

This is specialize in arithmetics comparison

```bash
((2>5));echo $?
1
```










