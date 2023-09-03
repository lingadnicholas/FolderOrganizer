#include "ExtensionOrganizerHandler.h"
#include <iostream> 

ExtensionOrganizerHandler::ExtensionOrganizerHandler(const std::filesystem::path p) : path{ p } {
}

// TODO
int ExtensionOrganizerHandler::handleRequest() {
	std::cout << "Successfully created and handled request on ExtensionOrganizerHandler on path " << path << std::endl;

	return 1; 
}