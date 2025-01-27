NAME := fixed
CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98 -g -O0
OBJDIR = objs
SRCS = Fixed.cpp main.cpp Point.cpp bsp.cpp
OBJS := $(SRCS:%.cpp=$(OBJDIR)/%.o)

$(OBJDIR)/%.o: %.cpp
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re