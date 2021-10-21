NAME = libft

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar ru
RM = rm -f

c-files = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c \
			ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_toupper.c ft_tolower.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memcmp.c  ft_strnstr.c ft_memchr.c \
			ft_atoi.c  ft_strlcpy.c ft_strlcat.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c 

c-bonus = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c ft_lstadd_back_bonus.c

o-bonus = $(c-bonus:.c=.o)
o-files = $(c-files:.c=.o)

ar: $(NAME).a

$(NAME).a: $(o-files)
	$(AR) $(NAME).a $(o-files)

bonus: $(NAME).a

$(NAME).a: $(o-bonus)
	$(AR) $(NAME).a $(o-bonus)

all: $(c-files)

clean:
	$(RM) $(o-files) $(o-bonus)

fclean:
	$(RM) $(basename $(c-files)) $(basename $(o-files))

re: clean ar bonus