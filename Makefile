NAME = libft.a

CC = cc

CFLAGS = -g -Wall -Werror -Wextra

# HEADER = -I libft.h  # -I <folder>

SRC =	ft_bzero.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strlen.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_substr.c\
		ft_split.c\
		ft_strdup.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_itoa.c\
		ft_striteri.c\
		ft_strmapi.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_lstnew_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstadd_back_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstsize_bonus.c

OBJ =	$(SRC:.c=.o)

all:	$(NAME)

	## nda-cours:
# run: main.c $(NAME)
	# gcc main.c $(NAME) -g -o run
	# ./run
# 
# run2: main.c $(NAME)
	# gcc main.c $(NAME) -g -o run
	# valgrind ./run
# 
# run3: main.c
	# ./libft_tester/libft_tester
 
.PHONY: run run2 run3

	##

$(NAME) : $(OBJ)
		ar -rcs $(NAME) $^

%.o : %.c
		$(CC) $(CFLAGS) $(HEADER) -c $< -o $@

clean: 
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re
