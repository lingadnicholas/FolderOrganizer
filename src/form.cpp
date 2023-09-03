#include "form.h"
#include "FolderOrganizer.h"

void Form::displayForm() {
	std::string choiceInput; 
	std::string pathInput; 

	std::cout << choiceText; 
	std::cout << "[0]\n"; 
	std::cout << "Choice: ";
	do {
		std::getline(std::cin, choiceInput);
	} while (!validChoice(choiceInput));

	std::cout << "Please enter a filepath to perform action on:\n"; 
	do {
		getline(std::cin, pathInput);
	} while (!validFilePath(pathInput));

	const int choice = std::stoi(choiceInput); 
	const std::filesystem::path path = pathInput; 

	FolderOrganizer f = FolderOrganizer(choice, path); 
	f.organize();
	return; 
}

bool Form::validChoice(std::string choice) {
	if (choice.length() > 1 || !std::isdigit(choice[0])) {
		std::cout << choiceText;
		std::cout << "Choice: "; 
		return false; 
	}
	
	int num = std::stoi(choice); 
	if (num > NUM_CHOICES - 1 || num < 0) {
		std::cout << choiceText;
		std::cout << "Choice: ";
		return false; 
	}
	return true; 
}

// Valid file paths are those that exist and that do not contain a space. 
bool Form::validFilePath(std::string path) { 
	const std::filesystem::path dir = path;
	if (!std::filesystem::is_directory(dir)) {
		std::cout << "Please enter a valid filepath:\n";
		return false; 
	}
	return true; 
}