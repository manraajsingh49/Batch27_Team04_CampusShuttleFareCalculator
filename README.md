# Batch27_Team04_CampusShuttleFareCalculator

##ALGORITHM

Algorithm: Campus Shuttle Fare Calculator
Step 1: Start the program.
Step 2: Define an enumeration Concession with two values: Not_Student = 0 and Student = 1.
Step 3: Define a structure Journey containing destination, baseFare, concession, and finalFare.
Step 4: Declare a structure variable j of type Journey, a variable status of type Concession, and integer variables i
and choice.
Step 5: Initialize a string array stops[10][30] with the names of 10 destinations and an integer array fare[10] with
their corresponding ticket prices.
Step 6: Display the program title "CAMPUS SHUTTLE FARE CALCULATOR" and the boarding point as "UPES".
Step 7: Run a loop from i = 0 to 9 to print all 10 available destinations along with their serial numbers and fares.
Step 8: Read the user's destination choice and store it in j.destination.
Step 9: Check if j.destination is less than 1 or greater than 10. If true, display "Invalid destination!" and go to Step
17.
Step 10: Decrease j.destination by 1 to match the array index, and assign fare[j.destination] to j.baseFare.
Step 11: Ask the user if they are a student (1 for Student, 0 for Not Student) and read the input into choice. Assign
choice to status.
Step 12: Check the value of status:
• If status is equal to Student (1), calculate j.concession = j.baseFare * 0.20.
• Else if status is equal to Not_Student (0), set j.concession = 0.
• Else, display "Invalid student status!" and go to Step 17.
Step 13: Calculate the final fare using the formula: j.finalFare = j.baseFare - j.concession.
Step 14: Print the "JOURNEY DETAILS" header along with the boarding point ("UPES") and the selected
destination name stops[j.destination].
Step 15: Print j.baseFare, j.concession, and j.finalFare
Step 16: End the program
Step 17: Stop

##Pseudocode

START
DEFINE ENUM Concession
Not_Student=0
 Student=1
END ENUM
DEFINE STRUCTURE Journey
 destination
 baseFare
 concession
 finalFare
END STRUCTURE
DECLARE j AS Journey
DECLARE status AS Concession
DECLARE i, choice AS INTEGER
STORE 10 destination names in stops array
STORE corresponding fares in fare array
DISPLAY "CAMPUS SHUTTLE FARE CALCULATOR"
DISPLAY "Boarding Point: UPES"
DISPLAY "Available Destinations"
FOR i = 0 TO 9
DISPLAY i + 1, stops[i], fare[i]
END FOR
DISPLAY "Enter destination number (1-10)"
INPUT j.destination
IF j.destination < 1 OR j.destination > 10 THEN
 DISPLAY "Invalid destination!"
 STOP
 END IF
j.destination = j.destination - 1
j.baseFare = fare[j.destination]
DISPLAY "Are you a student?"
DISPLAY "1. Student"
DISPLAY "0. Not Student"
INPUT choice
status = choice
IF status = Student THEN
j.concession = j.baseFare * 0.20
ELSE IF status = Not_Student THEN
j.concession = 0
ELSE
 DISPLAY "Invalid student status!"
 STOP
END IF
j.finalFare = j.baseFare - j.concession
DISPLAY "JOURNEY DETAILS"
DISPLAY "Boarding Point: UPES"
DISPLAY "Destination:", stops[j.destination]
DISPLAY "Base Fare:", j.baseFare
DISPLAY "Concession:", j.concession
DISPLAY "Final Fare:", j.finalFare
STOP
