## Write my first bash

### What i can use for write a bash script ?
- 3 options are give us .
- 1st option: advanced text editor (vi, vim,emacs, nano)
- 2nd option: Integrated Development Environment (IDE) like IntelliJ, VS code, Eclipse, etc .
- 3rd option: In cases of simple script we can use a command line with redirectors set.

## What write in my first bash script 

Ex : 
```bash
$ cat > /tmp/test <<EOF
heredoc> #!/bin/bash
heredoc> echo "Hello, World!"
heredoc> EOF
```
## How execute my bash script 
- We have Two invocations modality
	- We can just her name if he contains the *shebang* (#!/bin/bash)
	- get the script name i argument to command `bash` (bash /tmp/test)
		this option work also if the file don't have a permissions to execute tthe file.





















