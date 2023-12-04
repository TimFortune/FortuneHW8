# computeFunction.py
# Short description: This Python script computes values for the function f(x) = x^2 + 2 for x in the range [0, 9].
# Command line arguments: None
# Example invocation: python computeFunction.py

def compute_function(x):
    return x**2 + 2

# Print out values for x and f(x)
for x in range(10):
    result = compute_function(x)
    print(f"x: {x}, f(x): {result}")
