# LinuxShell
Design overview
---------------
* In this assignment, we implement a simple version of command line interpreter and it is for basic shell commands.
* It makes some operations which are 

	1. Reading text file and doing split operation for splitting the commands by using semicolons in the file.
	2. Executing the commands which it reads from the file.
	3. Also, it makes commands which we write directly to the terminal by using semicolons.

* We use thread structure for creating sub processes which are consists of the commands we write. Number of threads is static in our implementation. 
* We use strtok method for splitting commands according to semicolons.
* We implement two different modes which are bash file mode and command line mode.
* In bash mode, we read a file and we execute the commands in that file. When we execute the commands, we create threads and we put commands into threads.
* In command line mode, we give some commands to the terminal and we execute them again by using threads. We split the commands by using semicolons and 
then we execute the commands.

Complete specification
----------------------
* In the beginning of the assignment, we could not run the commands with semicolons.
* We used thread for solving this problem and we also use strtok method for splitting commands according to semicolons.
* When we split commands with strtok according to semicolons, it just reads the commands it does not read semicolons.
