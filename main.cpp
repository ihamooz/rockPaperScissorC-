/*
Student ID: S1901361
Name: Ibrahim Hamooz Abdul Razzag
Description: A simple C++ program to play rock paper scissor.
			       User input will be played against computer.
*/

#include <iostream>
#include <string>
#include <stdlib.h> 

int main()
{
	
	bool again = true;
	
	while (again = true) {
    
    std::cout << "\n\nWinning Rules of the Rock paper scissor game as follows: \n" \
                                " - Rock vs paper->paper wins \n" \
                                " - Rock vs scissor->Rock wins \n" \
                                " - paper vs scissor->scissor wins \n" \
                                "-------------------------------------------------------- \n";
    
    // Prompting for a choice
    int choice;
    std::cout << "Enter choice \n" \
                    " 1. Rock \n" \
                    " 2. paper \n" \
                    " 3. scissor \n";
    
    std::cin >> choice; // Saving user choice for verification
    
    // Checking if entered value is valid
    while (choice > 3 || choice < 1) {
	std::cout << "enter valid input: \n";
  	std::cin >> choice;
	}

	// Setting user choice
	std::string choice_name;
	if (choice == 1 ) {
	        choice_name = "Rock";

	}
    else if (choice == 2){
    	choice_name = "Paper";
    }
    else{
    	choice_name = "Scissor";
    }
        
    std::cout << "\n";
    std::cout << "user choice is: " + choice_name;
    std::cout << "\n\nNow its computer turn.......";
    
    int comp_choice;    
	comp_choice = rand() %3+1;


	// Setting computer choice
	std::string comp_choice_name;
	if (comp_choice == 1 ) {
	        comp_choice_name = "Rock";

	}
    else if (comp_choice == 2){
    	comp_choice_name = "Paper";
    }
    else{
    	comp_choice_name = "Scissor";
    }
	
	std::cout << "\nComputer choice is: " + comp_choice_name;
	
	std::cout << "\n\n" + choice_name + " V/S " + comp_choice_name;
	
	
	// Calculating result
	std::string result;
	if((choice == 1 && comp_choice == 2) || (choice == 2 && comp_choice ==1 )) {
		std::cout << "\n\nPaper Wins";
        result = "Paper";
	}  
    else if((choice == 1 && comp_choice == 3) || (choice == 3 && comp_choice == 1)) {
    	std::cout << "\n\nRock Wins";
        result = "Rock";
    }  
    else if((choice == 2 && comp_choice == 3) || (choice == 3 && comp_choice == 2)) {
    	std::cout << "\n\nScissor Wins";
        result = "Scissor";
    }
    else {
    	std::cout << "\n\n";
    }
        
        
	// Printing either user or computer wins 
	if (choice_name == comp_choice_name) {
		std::cout << "\n************>";
    	std::cout << "\n== TIE!!! ==>";
    	std::cout << "\n************>";
	}
    else if (result == choice_name) {
    	std::cout << "\n******************>";
    	std::cout << "\n== USER WINS!!! ==>";
    	std::cout << "\n******************>";

    }
    else {
    	std::cout << "\n**********************>";
    	std::cout << "\n== COMPUTER WINS!!! ==>";
    	std::cout << "\n**********************>";
    }
    
    // Promting user to continue with game
    std::string ans;
    std::cout << "\n\nDo you want to play again? (Y/N) :  ";
    std::cin >> ans;
    
    if (ans == "n") {
    	again = false;
    }
    else if (ans == "N") {
    	again = false;
    }
    
    
	}
	
	
	return 0;
	
}





    
