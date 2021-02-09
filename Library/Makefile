#Target_Name : Book
#<TAB>Command
PROJECT_NAME = book
SRC = book.cpp test_bl.cpp library.cpp

LIB = -lgtest -lgtest_main -lpthread

$(PROJECT_NAME) : $(SRC)
	g++ $^ -o $@.out $(LIB)

run:$(PROJECT_NAME)
	./$^.out
