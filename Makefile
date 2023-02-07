SOURCES = ft_isalpha.c \
			ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstadd_back.c \
		ft_lstclear.c \


FLAGS = -Wall -Wextra -Werror
NAME = libft.a
CC = ar -rcs
OBJS	= $(SOURCES:.c=.o)
RM = rm -rf
OBJECTS = $(patsubst %.c, %.o, $(SOURCES))
OBJECTS_B = $(patsubst %.c, %.o, $(BONUS))

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJS)

bonus: $(OBJECTS_B)
		ar -rcs $(NAME) $(OBJS) $(OBJECTS_B)

.c.o:
	gcc $(FLAGS) -c $< $^

all: $(NAME) bonus

clean:
	$(RM) $(OBJS) $(OBJECTS_B)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONEY: clean re fclean all