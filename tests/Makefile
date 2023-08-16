CC = gcc
CFLAGS = -c -Wall $(shell pkg-config --cflags check)
PROFILE_FLAGS = -fprofile-arcs -ftest-coverage
TST_LIBS = -lcheck -lm -lpthread -lrt -lsubunit 
SRC_DIR= src
TST_DIR= tests
SRC_FILES = $(addprefix $(SRC_DIR)/, *.c) 
TST_FILES = $(addprefix $(TST_DIR)/, *.c)


all: test

example-test.o:  $(SRC_FILES) $(addprefix $(SRC_DIR)/, example-test.h)
	$(CC) $(CFLAGS) $(PROFILE_FLAGS) $(SRC_FILES) 

check-example.o: $(TST_FILES)
	$(CC) $(CFLAGS) $(PROFILE_FLAGS)  $(TST_FILES) 

check_example_tests: example-test.o check-example.o
	$(CC) example-test.o check-example.o $(TST_LIBS) $(COV_LIBS) -o check_example_tests

test: check_example_tests
	./check_example_tests

.PHONY: clean all

clean:
	-rm *.o *.html *.gcda *.gcno check_example_tests
