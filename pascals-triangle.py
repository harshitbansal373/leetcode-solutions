# solution to the problem 118. Pascal's Triangle
class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        matrix = []

        for i in range(numRows):
            row = [None for _ in range(i+1)]
            row[0], row[-1] = 1, 1
            for j in range(1, len(row)-1):
                row[j] = matrix[i-1][j-1] + matrix[i-1][j]

            matrix.append(row)

        return matrix
        