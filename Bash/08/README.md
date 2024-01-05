## Understand conditional execution


### Execute a code bloc in function of test ?

	- option: `if`
**Ex:** (see ./script.sh)


### How to run a command if the previous command success/failed ?

	- option: `AND(&&)`,  `OR(||)`

When you use a `&&` the second command run only if the first is success

The `||` execute second command only if the first fail

YOu can use them in same time 

```bash
test -x /usr/bin/firefox && echo "firefox is executable!" # if can work only if `$?` send 0 .
firefox is executable!
```


```bash
$ test -x /etc/resolv.conf || echo "resolv.conf is not executable"
resolv.conf is not executable
```

```bash
test -x /etc/resolv.conf && echo "resolv.conf is  executable" || echo  "resolv.conf is not executable"
resolv.conf is not executable
```


### How to execute a code block in functions of variable value ?

	- option: `case`

**Ex:** See `./sample.sh` and `./sample2.sh`

```bash
$ bash ./sample.sh;echo $?
0
```

```bash
$ bash ./sample2.sh && echo "number" || echo "string"
Enter a number
12
number
```

```bash
$ bash ./sample2.sh && echo "number" || echo "string"
Enter a number
gg
string
```











 

















