CC=gcc
CFLAGS=-g -Wall
#LDFLAGS += -L ../target/debug
LDFLAGS += -L ../rust/target/release
LDLIBS += -lwork

all: main test

main:

test: main
	./main

clean:
	rm -rf main
