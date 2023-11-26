LINT_FLAGS = -w -pedantic -Wall

all: run

compile:
	mkdir -p build
	clang -o build/main src/main.c

run: compile

install:
	# only for debian based os
	sudo apt install clang-format clang-tools clang

format:
	clang-format -i src/main.c

lint:
	clang -o build/main src/main.c $(LINT_FLAGS)

clean:
	rm -rf build
