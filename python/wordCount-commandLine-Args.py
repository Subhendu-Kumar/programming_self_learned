import sys


def word_count(arguments):
    count = 0
    for arg in arguments:
        count += len(arg.split())
    return count


arguments = sys.argv[1:]
count = word_count(arguments)
print("Total word count:", count)
