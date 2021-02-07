src = test_stack.cpp
project = stack
project: $(src)
	g++ $^ -lgtest -lgtest_main -lpthread -o $@
run: project
	./$^
clean:
	rm $@