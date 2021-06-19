CC = gcc
CPPFLAGS += -DDEBUG
CFLAGS += -Wall -Wextra -g
LDFLAGS +=
LDLIBS +=
TARGET = five_day_week

.PHONY: all clean

all: $(TARGET)

clean:
	rm -f *.o $(TARGET)

five_day_week: five_day_week.o

test: test01 test02 test03

test01: five_day_week
	$(eval TEMP = $(shell mktemp))
	./$< < $@_input.txt | tee $(TEMP)
	diff -u $@_output.txt $(TEMP)
	rm $(TEMP)

test02: five_day_week
	$(eval TEMP = $(shell mktemp))
	./$< < $@_input.txt | tee $(TEMP)
	diff -u $@_output.txt $(TEMP)
	rm $(TEMP)

test03: five_day_week
	$(eval TEMP = $(shell mktemp))
	./$< < $@_input.txt | tee $(TEMP)
	diff -u $@_output.txt $(TEMP)
	rm $(TEMP)
