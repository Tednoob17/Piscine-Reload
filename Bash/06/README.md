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

	- option: `-ne` or `! ne`
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

### How to test if a number is superior or equal than other

        - option: `-eg`

```bash
[ 5 -eg 2 ];echo $?
0
```
```bash
[ 5 -eg 5 ];echo $?
0
```

```bash
[ 2 -eg 3 ];echo $?
1

```
### How to test if a number is less than other

	- option: `lt` | `! ge` 

```bash
[ 5 -ne 2 ];echo $?
1
```

```bash
[ ! 5 -ge 2 ];echo $?
1
```


