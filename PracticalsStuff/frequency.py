import numpy as np

rows = int(input("Enter the number of rows: "))
columns = int(input("Enter the number of columns: "))

matrix_elements = []
for i in range(rows):
    row = [float(x) for x in input(f"Enter elements for row {i + 1} (separated by space): ").split()]
    matrix_elements.append(row)

matrix = np.array(matrix_elements)

row_sums = np.sum(matrix, axis=1)
for i, row_sum in enumerate(row_sums):
    print(f"Sum of elements in row {i + 1}: {row_sum}")
