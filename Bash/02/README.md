## Manipulation of name and path to your scripts

- What name can i give to my script ?
	- For raisons technics and semantics it's important to choose a good name for your scripts
	- For verify if don't exist the conflict with others script/built-in with the same existing script or commands use `type -a`
	- Good practice is to add `.sh` at the end of bash script.

- Where i can placed my Bash scripts for execute them ?
	- Path to your bash script statement the way to call them.
	- On linux with have a directory make specially for executables. `echo ${PATH}`

**Ex:**

```bash
$ echo ${PATH}

/home/j3kyll/Downloads/yes/bin:/home/j3kyll/.local/bin:/home/j3kyll/.cargo/bin:/home/j3kyll/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/snap/bin

$ 
```
