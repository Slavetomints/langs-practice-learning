# Declare variables and gather input
total = 1
max_value = int(input("Please enter a non-negative number to get a factorial of: "))
current_value = 1

# Calculate factorial
while current_value <= max_value:
  total *= current_value
  current_value += 1

# Display results
print(f"{max_value}! is equal to {total}")