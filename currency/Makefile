#Target_Name : Dependencies
#<TAB>Command
PROJECT_NAME = Currency
SRC = currency.cpp test_currency.cpp

LIB = -lgtest -lgtest_main -lpthread

$(PROJECT_NAME) : $(SRC)
	g++ $^ -o $@.out $(LIB)

run:$(PROJECT_NAME)
	./$^.out

clean:
	rm *.out
