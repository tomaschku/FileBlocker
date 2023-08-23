#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <string>

int main(int argc, char *argv[]) {
	if (argc < 3) {
		printf("Syntax: %s <Filepath> <Time in Seconds>\n", argv[0]);
		return 1;
	}

	std::ofstream file;
	file.open(argv[1], std::ios::out | std::ios::app);
	std::this_thread::sleep_for(std::chrono::milliseconds(std::stoi(argv[2]) * 1000));
	file.close();

	return 0;
}