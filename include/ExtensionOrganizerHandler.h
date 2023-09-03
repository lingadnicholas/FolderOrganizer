#pragma once
#include "Handler.h" 
#include <filesystem> 

// 0 in choice list 
class ExtensionOrganizerHandler : public Handler {
	public: 
		ExtensionOrganizerHandler(const std::filesystem::path p); 
		int handleRequest(); 
	private:
		const std::filesystem::path path; 
};

