#Target_Name : Book
#<TAB>Command
PROJECT_NAME = book
SRC = book.cpp testlib2.cpp library.cpp

LIB = -lgtest -lgtest_main -lpthread

$(PROJECT_NAME) : $(SRC)
	g++ $^ -o $@.out $(LIB)

run:$(PROJECT_NAME)
	./$^.out

memcheck:$(PROJECT_NAME)
	valgrind ./$^.out

analyse:$(SRC)
	cppcheck $(SRC)