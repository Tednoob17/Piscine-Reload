## Test file with Bash

### How to test if a file exist ?
	- option: `-e` or `-a`
```bash
$ [ -a ./hunterxhunter ];echo $? 
1 
```
	- *Warning* : a directory, a pipes, a symblics link are a file, why because on linux
	all is file.

### How to test if a file is not empty ?
	- option: `-s`

```bash
$ test -s  /usr/bin/firefox;echo $?
0
```

### How to test if its a regular file ?
	- option: `-f` 

```bash
$ test /usr/bin/pwd; echo $?
0
```
Others example

```bash
$ test -f /usr ;echo $?
1 	#1 yes all is file on linux but /usr is a directory so it's not a *regular file*
```

### How to test if a file is a directory ?

	- option: `-d`

```bash
$ test -d /usr ; echo $?
0
```

### How to test if file is a symbolic link ?

	- option: `-h` or -L

```bash
$ ln -s Inverted noinverted # create a symbolic link with Inverted file (inverted file was already exist)
$ test -h noinverted ;echo $?
0
```

### How to test if a file is a named pipe ?
	- A named pipe is one stack
	- option: `-p`

```bash
$ mkfifo /tmp/mypipe  # make named pipes (FIFO's) with a given name
$ test -p /tmp/mypipe ;echo $?
0
```

### How to test if a file is a socket

	- option: -S
```bash
$ exec 63<>/dev/tcp/google.com/443
$ test -S /proc/${BASHPID}/fd/63;echo $?
0
```
### How to test if current user can execute a file ?

	- option: `-x`

```bash
$ test -x /usr/bin/firefox;echo $?
0
```

### How to test if the current user can read a file ?

	- option: `-r`
```bash
$ test -r /usr/bin/firefox ;echo $?
0
``` 

### How to test if the current user can write in a file ?

	- option: `-w`
```bash
$ test -w /usr/bin/firefox ;echo $?
1
```





