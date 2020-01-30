#include<stdio.h>

int function_1_you_add_that_is_your_purpose(int input_variable_1, int input_variable_2);

int main(){
    /* This is a multi line comment 
     * 
     * You can, and should, add comments to explain what your code is 
     * doing for others to come along and understand it.
     * 
     * A program in C has to start with a 'main' function. A function in a program is a piece of
     * code that can be constructed and then run whenever you ask for it. This will be expanded 
     * upon later but for now it can have a set of input arguments and the main piece of code in
     * curly brackets, called the body of the function. You also need to define the datatype of
     * the function. Main can be a type 'void' or 'int' however you should usually return an
     * integer from the main function to the operating system/user.
     * 
     * Main is the start and end point for program execution. If a piece of code is not in main
     * it will never be run by the computer.
    */
    int a, b, c;    // Here we are telling the computer how many bits needed to store our values
                    // The compiler makes a location in the memory as long as needed to store an
                    // integer (int) then gets what's there whenever the variable is called

    a = 1;  // What happens here is that the computer finds the location given to a in the memory
            // and then writes over what is there to be 1
    b = 2:  // Likewise for b, however something is awry.
    
    c = a + b;  // Here we take the values stored in a and b, add them together 
                // and write over what is at c. This line reads right to left in a way.
                // The compiler looks at what is on the right hand side of the assignment operator
                // (a fancy word for the '=' sign), follows the standard order of operations and
                // then assigns the variable c the resulting value.
                
    c = 6;      // Here we can assign c a completely new value and effectively wipe everything 
                // we did to it beforehand.
                
    c = c + 1;  // Here it takes the value from c, adds 1 to it then overwrites that back to c
    c = c * b;  // This will take the last output from c, at this point the value should be 7,
                // and multiply it by b then writing that at c again.
    c = function_1_you_add_that_is_your_purpose(c, a); // here we are calling the function
    printf("%d \n", c); //prints out a result, understanding this function is for later.
    return 0;   // We return the value 0 as the code for completion.
    
} // Our function main is complete at closing this bracket.

int function_1_you_add_that_is_your_purpose(int input_variable_1, int input_variable_2){
// ^ you can see the datatype of the function here, in this case 'int'
    
    /* Here is a function that we use to add two things, we can call it as much as we want from 
     * the main function. You want to use this to save copying and pasting code all the time.
     * Furthermore it also keeps things easy to maintain, say you need to change something in the
     * function, you don't have to worry about rewriting everything in the core code there is just
     * a neat little function call in main. Stop your code looking like spaghetti.
     * You will have noticed that the input of the function need to have their datatype declared
     * inside of the function declaration.
    */
    
    int local_variable_1; // Again we declare the spot in memory we will need.
    
    local_variable_1 = input_variable_1 + input_variable_2; // Takes the two input numbers and
    // adds them together saving the result to a new variable
    return local_variable_1; // This is the value to give back to main after the function
    // finishes, this has to be the same datatype as the 
}
