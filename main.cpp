#include <iostream>
#include <string>

int main() {
    std::string input;
    
    std::cout << "Hello! I am Jarvis. How can I assist you today?" << std::endl;
    
    while (true) {
        std::cout << "> ";
        std::getline(std::cin, input);
        
        // Add your logic here to process user input and generate appropriate responses
        
        if (input == "exit") {
            break;
        }
    }
    
    std::cout << "Goodbye! Have a nice day!" << std::endl;
    
    return 0;
}