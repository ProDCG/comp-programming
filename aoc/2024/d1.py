import pandas as pd
import numpy as np

def main():
    with open('aoc/2024/d1.txt', 'r') as input_file, open('output.csv', 'w') as output_file:
        for line in input_file:
            numbers = line.strip().split()
            if len(numbers) == 2:
                output_file.write(f"{numbers[0]},{numbers[1]}\n")

if __name__ == '__main__':
    main()