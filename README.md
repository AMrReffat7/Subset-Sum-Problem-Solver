# Subset-Sum-Problem-Solver
The program prompts the user to input the number of elements in the set, the elements themselves, and the target sum. It then employs a recursive backtracking algorithm to systematically explore two options at each step:

Include the current element in the sum: If the addition of the current element does not exceed the target sum, it is added to the current sum, and the algorithm proceeds to explore further combinations with this element included.

Exclude the current element from the sum: Regardless of whether the current element was included or excluded in the previous step, the algorithm proceeds to explore combinations without including the current element.

By systematically exploring these options for each element in the set, the program identifies and prints all subsets whose sum matches the target sum.

Usage
To use this program:

Compile the source code using a C++ compiler.
Run the compiled executable.
Enter the number of elements, the elements themselves, and the target sum as prompted.
The program will output all subsets whose sum matches the target sum.
Example
mathematica
Copy code
Enter the number of elements: 4
Enter the elements: 1 2 3 4
Enter the target sum: 5
1 4 
2 3 
Contributing
Contributions are welcome! If you'd like to contribute to this project, feel free to fork the repository, make your changes, and submit a pull request.
