#pragma once
class ExtensionOrganizerHandler {
	public: 
		ExtensionOrganizerHandler(const std::filepath::path path); 
		int handleRequest(); 
	private:
		const std::filepath::path path_; 
};

