## Compare and test numbers with Bash

### How to test if two number is equal ?

	- option: `-eq`

```bash
[ 5 -eq 2 ];echo $?
1
```

```bash
[ 5 -eq 5 ];echo $?
0
```

### How to test if two number is not equal

	- option: `-ne` or `!`
```bash
[ 5 -ne 2 ];echo $?
0
```

```bash
[ 5 -ne 5 ];echo $?
1
```

```bash
[ ! 5 -eq 2 ];echo $? 
0
```


### How to test if a number is superior than other

	- option: `-gt`

```bash
[ 5 -gt 2 ];echo $?
0
```

### How to test if a number is less than other

	- option: `lt`

```bash
[ 5 -ne 2 ];echo $?
1
```




