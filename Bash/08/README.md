## Understand conditional execution


### Execute a code bloc in function of test ?

	- option: `if`
**Ex:** (see ./script.sh)


### How to run a command if the previous command success/failed ?

	- option: `AND(&&)`,  `OR(||)`

When you use a `&&` the second command run only if the first is success

The `||` execute second command only if the first fail

```bash
test -x /usr/bin/firefox && echo "firefox is executable!" # if can work only if `$?` send 0 .
firefox is executable!
```


```bash
$ test -x /etc/resolv.conf || echo "resolv.conf is not executable"
resolv.conf is not executable
```

