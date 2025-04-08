CC = cc

NAME = libft.a

# Sources for the mandatory part
SRCS =	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_atoll.c

# Sources for the bonus part
SRCSB =	ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstsize.c

# Object files for the mandatory part
OBJS = ${SRCS:.c=.o}

# Object files for the bonus part
OBJSB = ${SRCSB:.c=.o}

# Compile the library.
# ar: archive
# rcs: replace, create, sort
LIBC = ar rcs

# Remove files
RM = rm -f

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Rules to generate objects
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

# Rules to build the executable
${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

# Default action when a target isn't specified
all: ${NAME}

# Target to make bonus
bonus: ${NAME} ${OBJSB}
	${LIBC} ${NAME} ${OBJSB}

# Removes generated objects
clean:
	${RM} ${OBJS} ${OBJSB}

# Removes generated objects and executables
fclean: clean
	${RM} ${NAME} ${bonus}

# Rebuild of the project: cleans all generated files and rebuilds all again
re: fclean all

# For testing purposes...
# Compile the libft in dynamic library instead of static
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(BONUS_SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(BONUS_OBJS)
