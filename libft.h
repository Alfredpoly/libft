#ifndef HEADER_FILE
#define HEADER_FILE

int	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strtrim(char const *s1, char const *set);

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

#endif
