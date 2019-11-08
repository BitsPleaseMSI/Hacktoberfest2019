#include <iostream>

int main() {
    int i, x;
    
	std::cout<<"Enter a number";
	std::cin >> x;
	
	for(i = 0; i < x; i++){
	    if(x%i == 0){
	        std::cout << i << " is a factor of " << x;
	    }
	}
	return 0;
}
