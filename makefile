NAME=Vaxcore
DIR=build
FLAGS = -std=c17 -Wall -Wextra -Wpedantic -Iinclude
DBGFLAGS = -g -O0 -DDEBUG -Wshadow -fsanitize=address,undefined -g
RELFLAGS = -O2
