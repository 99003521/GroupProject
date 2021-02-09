PROJECT_NAME = Employee
SRC = employee.cpp employee_test.cpp

LIB = -lgtest -lgtest_main -lpthread

$(PROJECT_NAME) : $(SRC)
	g++ $^ -o $@.out $(LIB)

run:$(PROJECT_NAME)
	./$^.out

clean:
	rm *.out
