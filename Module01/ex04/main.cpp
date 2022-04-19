#include <fstream>
#include <iostream>

int replacing(std::string &filename, std::string& s1, std::string& s2) {
	if (filename.empty() || s1.empty() || s2.empty()) {
		std::cout << "Error\n: String is Empty\n";
		return (1);
	}
	
	std::ifstream inFile(filename.c_str());
	if (inFile.fail()) {
		std::cout << "Error\n: Can't open the inFile\n";
		return (1);
	}

	std::string temp = filename.c_str();
	temp += ".replace";

	std::ofstream outFile(temp.c_str());
	if (outFile.fail()) {
		std::cout << "Error\n: Can't open the outFile\n";
		inFile.close();
		return (1);
	}

	std::string readString;
	std::string changedString;
	std::size_t index = 0;
	while (true) {
		std::getline(inFile, readString);
		if (inFile.eof())
			break ;
		while (true) {
			index = readString.find(s1);
			if (index == std::string::npos) {
				outFile << readString << std::endl;
				break ;
			}
			outFile << readString.substr(0, index) + s2;
			readString = readString.substr(index + s1.length());
		}
	}
	inFile.close();
	outFile.close();
	return (0);
}

int main(int argc, char *argv[]) {
	int ret = 0;

	if (argc != 4) {
		std::cout << "Error\n";
		std::cout << "./LoserSED <filename> <s1> <s2> required\n";
		return (1);
	}
	else {
		std::string filename(argv[1]);
		std::string s1(argv[2]);
		std::string s2(argv[3]);
		ret = replacing(filename, s1, s2);
	}
	return ret;
}
