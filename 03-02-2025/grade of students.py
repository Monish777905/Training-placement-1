# Function to calculate grade based on marks
def calculate_grade(marks):
    if marks >= 90:
        return 'A'
    elif marks >= 80:
        return 'B'
    elif marks >= 70:
        return 'C'
    elif marks >= 60:
        return 'D'
    else:
        return 'F'

# Input marks from user
marks = float(input("Enter marks (0-100): "))

# Calculate and output grade
grade = calculate_grade(marks)
print("Grade:", grade)
