CC = gcc
CPPFLAGS += -DDEBUG
CFLAGS += -Wall -Wextra -g
LDFLAGS +=
LDLIBS +=
TARGET = falling_blocks

.PHONY: all clean

all: $(TARGET)

clean:
	rm -f *.o $(TARGET)

falling_blocks: falling_blocks.o

test: test01 test02

test01: falling_blocks
	$(eval TEMP = $(shell mktemp))
	./$< < $@_input.txt | tee $(TEMP)
	diff -u $@_output.txt $(TEMP)
	rm $(TEMP)

test02: falling_blocks
	$(eval TEMP = $(shell mktemp))
	./$< < $@_input.txt | tee $(TEMP)
	diff -u $@_output.txt $(TEMP)
	rm $(TEMP)
