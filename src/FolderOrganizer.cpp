#include "FolderOrganizer.h"
#include <iostream> 

// Set the filesystem path to be passed to the handler
FolderOrganizer::FolderOrganizer(const int choice, const std::filesystem::path p) : path{ p } {
	switch (choice) {
		case 0: 
			h = new ExtensionOrganizerHandler(path); 
			break; 
		default: // should never get here, TODO: implement a NullHandler that does nothing 
			std::cerr << "Error: FolderOrganizer::constructor invalid choice\n"; 
			exit(1); 
	}
}

FolderOrganizer::~FolderOrganizer() {
	delete h;
}
// Using whatever Handler was assigned in the constructor, organize according to that (call the proper handler) 
int FolderOrganizer::organize() {
	h->handleRequest();
	return 1; 
}

