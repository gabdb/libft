NAME = libft.a

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

SRCS =  ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
		ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c\
		ft_strlen.c ft_atoi.c ft_toupper.c ft_tolower.c ft_strchr.c ft_itoa.c\
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c \
		ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strlcat.c ft_strmapi.c ft_striteri.c

BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lst_last.c \
			 ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

ARRC = ar rc

RANLIB = ranlib

RM = rm -f


.c.o : $(SRCS) $(BONUS_SRCS)
	${CC} ${CFLAGS} -c -o $@ $^

$(NAME) : $(OBJS)
	$(ARRC) $(NAME) $(OBJS)
	$(RANLIB) $(NAME)

bonus : $(OBJS) $(BONUS_OBJS)
	$(ARRC) $(NAME) $^
	$(RANLIB) $(NAME)

all : $(NAME)

clean :
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re