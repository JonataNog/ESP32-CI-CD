CC = gcc
CFLAGS = -c -Wall $(shell pkg-config --cflags check)
PROFILE_FLAGS = -fprofile-arcs -ftest-coverage
TST_LIBS = -lcheck -lm -lpthread -lrt 
COV_LIBS = -lgcov -coverage
SRC_DIR= src
TST_DIR= tests
SRC_FILES = $(addprefix $(SRC_DIR)/, *.c) 
TST_FILES = $(addprefix $(TST_DIR)/, *.c)
GCOV = gcovr 
GCONV_FLAGS = -r . --html --html-details 


all: coverage_report.html

example-test.o:  $(SRC_FILES) $(addprefix $(SRC_DIR)/, example-test.h)
	$(CC) $(CFLAGS) $(PROFILE_FLAGS) $(SRC_FILES) 

check-example.o: $(TST_FILES)
	$(CC) $(CFLAGS) $(PROFILE_FLAGS)  $(TST_FILES) 

check_example_tests: example-test.o check-example.o
	$(CC) example-test.o check-example.o $(TST_LIBS) $(COV_LIBS) -o check_example_tests

test: check_example_tests
	./check_example_tests

coverage_report.html: test
	#$(GCOV) $(GCONV_FLAGS) -o coverage_report.html

.PHONY: clean all

clean:
	-rm *.o *.html *.gcda *.gcno check_example_tests
