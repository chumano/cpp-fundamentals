OUTPUT = main
CFLAGS = -g -c -Wall

.PHONY:
build: clean Resource.o
	g++ -g -o $(OUTPUT) Resource.o  main.cpp

Resource.o:
	g++ $(CFLAGS) -o Resource.o Resource.cpp

.PHONY:
clean:
	rm -f Resource.o
	rm -f $(OUTPUT)

.PHONY:
run: build
	./$(OUTPUT)
	