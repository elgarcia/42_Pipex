# 📣 42_Pipex 📣
A project about pipes and child/parent process

***

**✅Objective✅**
In this project we aim to execute two different commands (or scripts) to a file and redirect the output into another file (could exist or not).

To make sure this is successfully done, we will use some functions that we are allowed to use, there we have some important functions we will use:
- `int pipe()` : Create a pipe. The array of file descriptors returned by this function can be used as arguments for the `read()`.
- `int fork()` : Create a child process. The integer returned by this function is the process id of the processs created.
- `int execve(const char *pathname, char *const _Nullable argv[], char *const _Nullable envp[]);` : Executes the program referred to by pathname. This causes the program that is currently being run by the calling process to be replaced with a new program, with newly initialized stack, heap, and (initialized and uninitialized) data segments.
    - `const char *pathname` : This is the path of the command/script to execute. 
    - `char *const _Nullable argv[]` : This is an array of string where we will save the name of the command and the arguments (in case we have). Can be NULL.
    - `char *const _Nullable envp[]` : This is an array of string where we will have the enviroment paths. Can be NULL.

**📝Functions📝**
There we have a summary of the most valuable functions I implemented:
- `void	init_pipex(int *pipe_fd, pid_t *pid);` : This function where we open the pipes with the function `int pipe()` mentioned before. After this action we use the function `int fork()` to create the child process. 
- `void	treat_child(int *pipes, char **argv, char ***exec_args, char **envp);` : This function will manage the child process, where we will use the first `execve()` call.
- `int		prepare_command(char **argv, int arg_c,	char ***exec_args, char *envp);` : In this one we get the command given by arguments in the call of the executable, and basically parse it to get the necessary arguments to use the function `execve()`.
- `int		check_command(char *command, char ***exec_args);` : This function make sure the command that they give us exists and we have enough permissions to execute it. If not it will `exit()` with the correct value (In this case 127).
- `int		assign_path(char ***exec_args, char *command, char **envp);` : This function is called in `prepare_command()` to assign the correct path to the command from the `envp[]`.
