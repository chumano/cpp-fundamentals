OUTPUT = main

.PHONY:
build: clean
	g++ -g -o $(OUTPUT) Person.cpp main.cpp

.PHONY:
clean:
	rm -f $(OUTPUT)

.PHONY:
run: build
	./$(OUTPUT)
	