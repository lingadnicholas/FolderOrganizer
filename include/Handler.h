#pragma once

class Handler {
	public: 
		Handler();
		virtual int handleRequest() = 0; 
};

