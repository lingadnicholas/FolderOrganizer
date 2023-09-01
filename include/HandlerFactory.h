#pragma once

#include <filesystem> 
// HandlerFactory takes in a choice and returns the correct FileHandler to do the job. 
class HandlerFactory {
	public: 
		virtual BaseHandler* create();
};

