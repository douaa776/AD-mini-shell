#ifndef MINISHELL_H
# define MINISHELL_H

#include <pwd.h>    
#include <unistd.h> 
# include <unistd.h>
# include <stdbool.h>
# include <stdlib.h>
# include <stdio.h>
# include <errno.h>
# include <string.h>
# include <sys/wait.h>
# include <sysexits.h>

#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define PINK    "\033[1;35m"
#define CYAN    "\033[1;36m"
#define WHITE    "\033[1;37m"
#define NC      "\033[0m"


#define ERROR(msg) fprintf(stderr, PINK msg NC "\n")
#define DL	"\t\n\v\f\r "

enum{
	OK,     /* Operation succeeded */
	ERROR   /* Operation failed */
};


typedef struct s_builtin{
    const char *builtin_name;
	int (*foo)(char **av);
} t_builtin;

int	ad_echo(char **args);
int	ad_env(char **args);
int	ad_exit(char **args); 

void 	exitLoading();  
void	printbanner();  

int	Chdir(const char *path);     
pid_t	Fork(void);                 
void	Execvp(const char *file, char *const argv[]); 
pid_t	Wait(int *status);
pid_t	Waitpid(pid_t pid, int *status, int options); 
void	*Malloc(size_t size);         
void	*Realloc(void *ptr, size_t size);
char	*Getcwd(char *buf, size_t size); 
void	Getline(char **lineptr, size_t *n, FILE *stream);

#endif
