================================================================================
                         GRADEBOOK MANAGER
                 Learn Data Structures Through Hands-On Coding
================================================================================

PROJECT OVERVIEW
================================================================================
Build a complete student grading system that tracks multiple students,
their grades, calculates averages, assigns letter grades, and provides
class-wide statistics including distribution and top performers.

FILES INCLUDED
================================================================================
main.cpp              - Main gradebook code (has MISSING segments)
questions.txt         - Student questionnaire (fill in answers)
missing_segments.txt  - Hints and solutions
guidance.txt          - Step-by-step tutorial
README.md             - This file

QUICK START (5 minutes)
================================================================================
1. Save all files in one folder
2. Compile: g++ main.cpp -o gradebook
3. Run: ./gradebook
4. Open main.cpp and find // MISSING comments
5. Complete all 7 missing segments
6. Recompile and test with options 1-7

MISSING SEGMENTS (7 total)
================================================================================
[ ] 1. Add grades vector to Student struct
[ ] 2. calculateAverage() - Sum of grades ÷ count
[ ] 3. letterGrade() - A=90+, B=80+, C=70+, D=60+, F<60
[ ] 4. calculateClassAverage() - Average of all student averages
[ ] 5. findTopStudent() - Student with highest average
[ ] 6. displayGradeDistribution() - Histogram of letter grades
[ ] 7. Complete main menu options 2-7

TEST YOUR CODE
================================================================================
Test average:
Grades [85, 90, 95] → Average: 90.0 → Letter: A

Test class stats:
Student A: 95 avg, Student B: 85 avg, Student C: 75 avg
Class average: 85.0, Top student: A (95.0)

Test distribution:
Two A's, one C → "A: ** (2)", "C: * (1)"

Test grade addition:
Add 85 to student 1001 → Grade stored in vector

EXPLORE THE TOOLS
================================================================================
Option 1 - Add new student (name, ID)
Option 2 - Add grade to existing student
Option 3 - View all students and their grades
Option 4 - View individual student report
Option 5 - Show class summary (average, top student)
Option 6 - Show grade distribution histogram
Option 7 - Find top performing student

QUESTIONNAIRE TOPICS (8 questions)
================================================================================
- Struct vs separate vectors (advantages)
- Fixed-size array vs vector for grades
- Configurable grading scales
- Weighted vs unweighted averages
- Handling ties for top student
- Scaling histograms for large classes
- Removing transferred students
- Extra credit exceeding 100%

FUN FACTS
================================================================================
- First gradebooks were clay tablets (2000 BCE)
- Harvard used a 100-point scale since 1883
- Finland doesn't use letter grades until high school
- Some schools use pass/fail only
- AI can now predict student grades with 80% accuracy

EXTENSION IDEAS
================================================================================
Easy: Drop lowest grade, pass/fail option, sort by name or average
Medium: Weighted categories, CSV import/export, median and std deviation
Hard: Assignment categories, report card generator, GUI with Qt

GRADING (100 points)
================================================================================
Code Completion (65 points) - 7 segments
Questionnaire (25 points) - 8 questions
Code Quality (10 points) - Comments and error handling

COMMON ERRORS & SOLUTIONS
================================================================================
ERROR: calculateAverage divides by zero
FIX: Check if grades.empty() before dividing

ERROR: findTopStudent returns wrong student
FIX: Track both student AND their average separately

ERROR: Grade distribution switch missing break
FIX: Add break after each case statement

ERROR: Student grades not saving
FIX: Ensure grades vector is in struct and push_back works

DATA STRUCTURES MNEMONIC
================================================================================
STRUCT = Bundle related data (name, ID, grades)
VECTOR = Dynamic array (grows as needed)
MAP = Key-value pairs (ID → Student)
LOOP = Process each element

"Good data structures make code simple. Bad ones make it complex."

================================================================================
              COMPLETE ALL MISSING SEGMENTS
              UNDERSTAND DATA STRUCTURES
              BECOME AN EDUCATION PROGRAMMER! 📚
================================================================================