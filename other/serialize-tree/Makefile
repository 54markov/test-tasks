SRC_DIR   := src
BUILD_DIR := build

all:
	mkdir -p $(BUILD_DIR)
	cd ./$(BUILD_DIR) && cmake ../ && make

test: all
	cd ./$(BUILD_DIR) && make test

clean:
	rm -Rf $(BUILD_DIR)
