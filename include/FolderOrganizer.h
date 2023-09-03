#pragma once

#include <filesystem> 
#include "Handler.h"
#include "ExtensionOrganizerHandler.h"

class FolderOrganizer {
	public: 
		FolderOrganizer(const int choice, const std::filesystem::path p);
		~FolderOrganizer();
		int organize(); 
	private: 
		const std::filesystem::path path; 
		Handler* h; 


};

