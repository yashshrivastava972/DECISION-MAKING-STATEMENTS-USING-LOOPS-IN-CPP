**PROGRAM 6A:**

**Aim:**  To Print Even Values between 0 and 10.

**Tool:**  VS CODE.

**Theory:**
This program illustrates basic control structures in C++:
- for loop
- if conditional
- modulus operator (%)
- cout for output

Core Concepts Involved:
- Looping: The for loop runs from i = 0 to i = 10.
- Even Number Check: Inside the loop, the condition i % 2 == 0 checks if i is divisible by 2 (i.e., even).
- Output Statement: If the condition is true, it prints the value of i using cout.

 How it works:
- The loop begins at i = 0.
- For each value of i up to 10, it checks if i is even.
- If i is even, it’s printed. If not, it’s skipped.
- The result is a display of all even numbers from 0 to 10.

Integration of Concepts:
The code shows how:
- Iteration (for loop) walks through each number.
- Selection (if statement) filters only even numbers.
- Output (cout) shows the result.
This reflects a classic algorithmic pattern: traverse a set → apply a condition → perform an action based on that condition.

Summary of Behavior:
- The program starts with i = 0.
- It increments i one by one up to 10.
- During each step, it checks whether i is even.
- If yes, it prints the number.

Real-World Applications:
This logic may be basic, but it’s everywhere:
- Filtering even rows/IDs in databases
- Selecting alternate frames in video processing
- Applying rules to numbers in signal processing (like sampling)
- Triggering events based on pattern recognition in embedded systems.

**Conclusion:**
This simple program demonstrates conditional iteration and the use of the modulus operator for filtering numeric patterns (in this case, even numbers). It’s an essential foundation for learning how to apply logic to control the flow of execution in a program. This concept can be expanded to filter odd numbers, prime numbers, or custom sequences.

**PROGRAM 6B:**

**Aim:** Use a for Loop to Print "SIT" 5 times.

**Tool:** VS CODE.

**Theory:**
This program showcases foundational elements of C++:
- Looping using the for construct
- Output using cout
- Understanding scope and repetition in a controlled environment

Key Concepts:
The for Loop:
for(int i = 1; i <= 5; i++)

- Initialization: int i = 1 starts the loop from 1.
- Condition: i <= 5 keeps the loop running as long as i is less than or equal to 5.
- Increment: i++ increases i by 1 after each iteration.
The loop executes 5 times (i = 1 to 5).

Output Statement:
cout << "SIT" << endl;

- cout: Sends the string "SIT" to the console.
- endl: Moves the cursor to the next line after printing.
This line is repeated during each loop cycle, printing "SIT" five times.

**Conclusion:**
This program demonstrates fixed iteration and basic output mechanics in C++. It’s designed to repeat a message a certain number of times, which is a common task in:
- Displaying headers
- Logging system checks
- Initializing repeated elements
By combining iteration and output, it teaches how programs automate repetitive tasks—a key principle in all areas of computing and engineering.

**PROGRAM 6C:**

**Aim:** To Print the Numbers till 19.

**Tool:** VS CODE.

**Theory:** 
This program highlights how C++ handles loop control, initialization, and output, using the while loop construct.

While Loop Syntax:
while(i < 20)

- The loop checks if i is less than 20 before each iteration.
- If the condition is true, the loop body executes. If false, it stops.
Unlike a for loop, a while loop doesn't contain initialization, condition, and increment in one line. Instead, these are separated and often more flexible.

Increment Step:
i++;
- After printing, i is increased by 1 to move to the next iteration.

Program Flow Summary:
- Start at i = 0.
- Check if i < 20. If yes:
- Print the value of i.
- Increment i.
- Repeat steps 2–3 until i becomes 20.
Outputs all integers from 0 to 19.

**Conclusion:**
This program beautifully demonstrates how to:
- Use a while loop for controlled iteration.
- Apply a loop counter with manual updates (i++).
- Generate sequential output using standard I/O.
  
It’s a vital concept in programming, especially when:
- The number of iterations is not known in advance.
- Loop control requires dynamic conditions (e.g., based on user input or system state).
- You're handling simulations, reading sensors, or real-time processing where while gives flexibility over for.

**PROGRAM 6D:**

**Aim:** Implementation of Decision Making Statements Loops to Check Passcode using While Loop.

**Theory:** Your code demonstrates multiple core concepts from C++ programming, particularly those used in user authentication systems.

1. Variable Declarations
string password = "@YASH2025", input, newPass;
int attempts = 0;

- password stores the original password.
- input takes user input during login attempts.
- newPass stores a new password if reset is requested.
- attempts tracks the number of incorrect login tries.

2. while Loop for Attempt Control
while (attempts < 3)

- Restricts login attempts to a maximum of 3.
- Ensures the loop exits if:
- The correct password is entered.
- The user fails 3 times.

3. Password Verification
if (input == password)

- Checks if entered password matches the stored one.
- Grants access and offers password reset if matched.

4. Password Reset Logic
char choice;
cin >> choice;

if (choice == 'y' || choice == 'Y')

- Prompts the user to reset the password.
- Updates password to newPass if user agrees.
Note: The reset only changes password inside the current session—there’s no permanent storage, which is typical in simple console-based programs.

5. Incorrect Attempts Handling
attempts = attempts + 1;

- Increments the number of failed attempts.
- Displays remaining attempts.
- Denies access after 3 failures.

Real-world relevance: Although simplified, it mimics real authentication workflows like:
- Login validation
- Attempt limiting (security feature)
- Optional password reset
It’s an excellent foundation to introduce security principles, data management, and user interface flow in console applications.

**Conclusion:**
This program effectively demonstrates:
- Control structures: while, if, and conditional logic.
- String comparison: Critical for authentication.
- User interaction: Using cin and cout for prompt-response behavior.
- State tracking: Managing session data like attempts and password resets.

**PROGRAM 6E:**

**Aim:** To Reverse the Last 5 Digits of PRN.

**Tool:** VS CODE.

**Theory:**
1. PRN Input and Type
long long prn;

- long long allows for large values (like a 11-digit PRN).
- Good choice since standard int or even long might overflow.

2. Modulus and Division for Digit Extraction
int lastFive = prn % 100000;

- Uses % to isolate the last 5 digits of the PRN.
- This is pure modular arithmetic in action.
long long firstPart = prn / 100000;

- Division trims off those last five digits to isolate the start.

3. Reversing Digits Algorithm
while (lastFive > 0) {
    int digit = lastFive % 10;
    reversed = reversed * 10 + digit;
    lastFive = lastFive / 10;
}

- This loop builds the reversed number digit by digit.
- Shows precise control flow, and proper use of accumulator logic.

4. Combining Parts to Form New PRN
long long newPRN = firstPart * 100000 + reversed;

- Appends the reversed digits back to the initial portion.
- Maintains the original digit count and format.

**Conclusion and Applications:**
This program reflects:
- Numerical manipulation skills.
- Efficient use of control structures.
- Precision with data types.
- Logic separation: input, transform, output.

**PROGRAM 6F:**

**Aim:** Implementation of Nested for Loops.

**Tool:** VS CODE.

**Theory:** 
Nested loops are loops inside loops. The outer loop runs first, and for every iteration of the outer loop, the inner loop runs fully.

1. Outer Loop
for(int i = 1; i <= 2; ++i)

- This loop runs twice: i = 1 and i = 2
- Prints "Outer:1" then "Outer:2"—once per outer loop iteration

2. Inner Loop
for(int j = 1; j <= 3; ++j)

- Runs three times for each outer loop iteration
- On i = 1, it prints:
Inner:1
Inner:2
Inner:3
- Then repeats the same when i = 2

Program Flow Summary:
The flow looks like this:
| Outer i | Inner Loop j Outputs | 
| 1 | Inner:1, Inner:2, Inner:3 | 
| 2 | Inner:1, Inner:2, Inner:3 | 

**Conclusion:**
This program is a classic way to teach looping logic, especially useful for:
- Building grids, like rows and columns
- Generating combinations of elements
- Constructing multi-level iterations.

**PROGRAM 6G:**

**Aim:** To Print a Simple Pyramid.

**Tool:** VS CODE.

**Theory:** 
Outer Loop: Controls the Rows
for (i = 1; i <= n; i++)

- Iterates from 1 to 5.
- Each iteration represents a new line of output.
- cout << endl; starts a fresh line before printing stars.

Inner Loop: Controls the Stars in Each Row
for (j = 1; j <= i; j++)
    cout << "* ";

- For row i, prints i stars.
- The stars increase with each row, creating a triangle shape.

Output Breakdown
Each row grows progressively:
| Row (i) | Output | 
| 1 | * | 
| 2 | * * | 
| 3 | * * * | 
| 4 | * * * * | 
| 5 | * * * * * | 

**Algorithm:** Left-Aligned Right-Angled Star Triangle:
Input
- Set n = 5 → Number of rows (can be made user-defined for flexibility).

Outer Loop (Rows)
- Loop i from 1 to n:
- First, print a newline to move to the next row.
Inner Loop (Stars)
- Loop j from 1 to i:
- Print "* " for each column in the current row.

Output Structure
- Each row contains a number of stars equal to its row index.
- The triangle grows downward and to the right:
* 
* * 
* * * 
* * * * 
* * * * * 

**Conclusion & Learning Outcomes:**
This program demonstrates:
- Loop control mechanics
- Console formatting
- Pattern generation logic
It’s foundational for developing shapes, grids, and UI designs in console apps and a great launchpad for recursion and dynamic formatting down the road.

**PROGRAM 6H:**

**Aim:** To Print a Flipped Simple Pyramid.

**Tool:** VS CODE.

**Theory:** Center-Aligned Star Triangle:
Outer Loop – Row Control
for (i = 1; i <= n; i++)

- Executes once for each row, from i = 1 to i = 5.
- Each iteration represents one line of the triangle.

First Inner Loop – Space Padding
for (k = i; k < n; k++)
    cout << "  ";

- Inserts (n - i) pairs of spaces before the stars.
- Creates the left-side alignment, pushing stars right.
Each "  " represents two spaces—important for spacing to match * .

Second Inner Loop – Star Printing
for (j = 1; j <= i; j++)
    cout << "* ";

- Prints i stars in the current row.

Output Visualization
The result looks like:
        * 
      * * 
    * * * 
  * * * * 
* * * * * 

**Algorithm:** Left-Aligned Star Pyramid:
Input
- Define an integer n = 5 → number of pyramid rows (can be user-defined too).

Loop for Row Construction
For each row i from 1 to n:
1. Print spaces for alignment
- Loop k from i to n - 1
- Print two spaces "  " to shift stars right.
- This creates the left-aligned pyramid effect.
2. Print stars
- Loop j from 1 to i
- Print "* " for each star in the current row.
- Number of stars = row number i
3. Move to the next line

Output Breakdown
Each row looks like this: | Row | Spaces | Stars | |-----|--------|-------| | 1   | 4      | 1     | | 2   | 3      | 2     | | 3   | 2      | 3     | | 4   | 1      | 4     | | 5   | 0      | 5     |
So the output forms a symmetric, left-aligned pyramid like:
        * 
      * * 
    * * * 
  * * * * 
* * * * * 

**Conclusion:**
This snippet teaches:
- Nested loop coordination.
- Pattern alignment using whitespace.
- Precision formatting with characters.
- Scalable structure—change n to increase triangle size!
This type of pattern is core in:
- Console-based UI design.
- Interview prep questions.
- Developing spatial thinking for 2D structures.

**PROGRAM 6I:**

**Aim:** To Print Floyd's Series.

**Tool:** VS CODE.

**Theory:** Floyd’s Triangle Generator:
Key Concepts Demonstrated
- Sequential number tracking with num
- Nested loops for row-wise control
- Dynamic row content size

Outer Loop — Row Control
for (int i = 1; i <= rows; i++)

- Iterates through the number of rows.
- Controls how many lines will be printed.

Inner Loop — Numbers per Row
for (int j = 1; j <= i; j++)
    cout << num << " ";
    num++;

- Each row prints i numbers.
- num++ ensures numbers increase linearly from top to bottom.
This results in:
- 1 number on Row 1
- 2 numbers on Row 2
- 3 on Row 3 … and so on

Output Visualization
If rows = 5, the output will be:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

Every new row grows in length by one element and continues the number sequence without resetting. Classic Floyd’s triangle.

**Algorithm:** Right-Angled Number Triangle:
Input
- Read an integer rows — total number of rows in the triangle.
Initialize
- Set a counter variable num = 1 to begin printing from 1.

For Each Row i from 1 to rows:
1. Repeat the following i times (j = 1 to i):
- Print the value of num followed by a space.
- Increment num for the next number.
2. Move to the next line.

Output Structure
- The triangle grows row by row.
- Each row contains sequential numbers and number of items equals the row index.
- For rows = 5, output is:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

**Conclusion and Learning Takeaways:**
This program gives you practical command over:
- Incremental control of output structures.
- Nested loops with variable inner bounds.
- Real-time variable tracking (num).
Great stepping stone to explore:
- Pascal’s triangle.
- Pyramid number patterns.
- Zig-zag arrays or matrices.

**PROGRAM 6J:**

**Aim:** To Print Continuous Alphabet Pyramid.

**Tool:** VS CODE.

**Theory:** Alphabetic Triangle with Wrap-Around:
Key Components
- char ch = 'A';
- Initializes the character to start from 'A'.
- Outer Loop (i) → Rows
for (int i = 1; i <= rows; i++)
- Controls the number of rows and the height of the triangle.
- Inner Loop (j) → Characters Per Row
for (int j = 1; j <= i; j++)

- Prints i characters in each row, incrementing character value.

Wrap-Around Logic
if (ch > 'Z') {
    ch = 'A';
}

- Ensures that after 'Z', it loops back to 'A'.
- Prevents printing junk characters beyond the uppercase alphabet.

Output Insight
For rows = 5, you get:
A
B C
D E F
G H I J
K L M N O

The total number of characters printed is the sum of the first n natural numbers:
1 + 2 + 3 + 4 + 5 = 15
…and our logic keeps those 15 characters rotating within A–Z seamlessly!

**Algorithm:** Alphabet Triangle with Wrap-Around:
Input
- Read an integer rows — number of rows in the triangle.
Initialize
- Set character variable ch = 'A' — starting alphabet.

For Each Row i from 1 to rows:
1. Repeat the following i times (j = 1 to i):
- Print the current character ch followed by a space.
- Increment ch to the next alphabet.
- If ch goes beyond 'Z', reset it to 'A' to wrap around.
2. Move to the next line.

Logic Highlights
- Triangle shape: Each row i has i characters → forms a right-angled triangle.
- Alphabet wrap-around ensures cycling between 'A' to 'Z' repeatedly if rows exceed 26 letters.
- Example for rows = 5:

A
B C
D E F
G H I J
K L M N O

**Conclusion and Learning Points:**
This program excels at:
- Character type arithmetic
- Nested loop structure
- Dynamic control of content per row
- Cyclic behavior with wrap-around condition
You’ve created something that could easily be modified into:
- A lowercase triangle ('a' to 'z')
- A mirrored or right-aligned version
- A grid with fixed width and alphabetical fill.

**PROGRAM 6K:**

**Aim:** To Print Hourglass Pattern.

**Tool:** VS CODE.

**Theory:** Hourglass Star Pattern Using Loops:
This program skillfully utilizes space and star control to print a two-part geometric pattern:

1. Top Half (Inverted Pyramid)
for (int i = 0; i < n; i++)

- Prints decreasing rows of stars starting from maximum width.
- Space increases from left to right (j < i)
- Star count decreases using formula: 2*(n-i) - 1
Example (n = 5):
*********
 *******
  *****
   ***
    *

2. Bottom Half (Normal Pyramid)
for (int i = 1; i <= n; i++)

- Builds increasing rows of stars.
- Space decreases as rows grow (j < n - i)
- Stars increase via formula: 2*i - 1
Output continues:
    *
   ***
  *****
 *******
*********

Together, they form an hourglass or diamond-like shape with a narrow middle and equal halves mirrored vertically.

**Algorithm:** Print Hourglass Star Pattern:
Input
- Read an integer n — the number of rows for the top half of the pattern.

Top Half Inverted Triangle
For i from 0 to n - 1:
1. Print i spaces
→ This shifts the stars rightward on each new row.
2. Print 2 * (n - i) - 1 stars
→ Ensures the stars decrease in count symmetrically:
2n - 1, 2n - 3, ..., 1
3. Move to the next line.

Bottom Half Triangle
For i from 1 to n:
1. Print n - i spaces
→ This creates a leftward shift.
2. Print 2 * i - 1 stars
→ Stars increase symmetrically:
1, 3, ..., 2n - 1
3. Move to the next line.

Overall Structure
- The pattern is symmetric around the center — it shrinks and then expands.
- Space and star logic mirror each other in both halves for visual balance.

**Conclusion:**
This program demonstrates:
- Precise control of symmetry.
- Use of arithmetic expressions for geometric designs.
- Mastery of nested loop logic.
- Understanding of pattern reversal and continuation.
Great for:
- Practicing visual recursion.
- Sharpening nested iteration understanding.
- Building CLI-based graphic logic.
