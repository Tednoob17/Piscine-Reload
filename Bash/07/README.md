## How to test strings in Bash


### How to test if two strings are equals ?
	
	- option: `=`

```bash
$ a="toto"; b="toto"; [ $a = $b ];echo $?
0
```


### How to test if two strings are not equals ?

	- option: `!=`

```bash
 a="toto"; b="toto"; [ $a != $b ];echo $?
1
```

### How to test if string is empty ?

	- option: -z
```bash
$a=""
$ [ -z $a ]; echo $?
0
```

### How to test if string is not empty ?

	- option: -n

``















