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

	- option: `-z`
```bash
$a=""
$ [ -z $a ]; echo $?
0
```

### How to test if string is not empty ?

	- option: `-n` | `! -z` 

```bash
a="toto"
$ [ -n $a ];echo $?
0

$ [ -z $a ];echo $?
1

$ [ ! -z $a ];echo $?         
0
```

### How to compare the lexical position for two strings ?

	- option: `>` and `<` 

```bash
$ [ "aa" \> ""ab ];echo $?
1
```

```bash
$ [ "aa" \< "ab" ];echo $?
0
```


### How to test string comformity with regular expression ?

	- option: `[[  ]]` and in synthax we can use `=~`

```bash
$ a="t3d"
$ [[ a=~"3d" ]];echo $? # if `a` contain `3d`
0
```
```bash
$ [[ a=~^"t" ]];echo $? # if `a` begin by `t`
0

```





