#pragma once

#include <iostream> 
#include <string> 
#include <filesystem> 

const int NUM_CHOICES = 1; 

class Form {
	public: 
		void displayForm(); 
	private:
		bool validChoice(std::string choice); 
		bool validFilePath(std::string path); 
		const std::string choiceInput = "Please input a number 0-" + std::to_string(NUM_CHOICES - 1) + ".\n";

};

