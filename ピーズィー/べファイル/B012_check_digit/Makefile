CC = gcc
CPPFLAGS +=
CFLAGS += -Wall -Wextra -g
LDFLAGS +=
LDLIBS +=
TARGET = check_digit

.PHONY: all clean

all: $(TARGET)

clean:
	rm -f *.o $(TARGET)

check_digit: check_digit.o

test: test01 test02 test03

test01: check_digit
	$(eval TEMP = $(shell mktemp))
	./$< < $@_input.txt | tee $(TEMP)
	diff -u $@_output.txt $(TEMP)
	rm $(TEMP)

test02: check_digit
	$(eval TEMP = $(shell mktemp))
	./$< < $@_input.txt | tee $(TEMP)
	diff -u $@_output.txt $(TEMP)
	rm $(TEMP)

test03: check_digit
	$(eval TEMP = $(shell mktemp))
	./$< < $@_input.txt | tee $(TEMP)
	diff -u $@_output.txt $(TEMP)
	rm $(TEMP)
