from collections import Counter
import re


def get_most_frequent_words(file_path, num_words=10):

    with open(file_path, "r", encoding="utf-8") as file:
        text = file.read().lower()

    words = re.findall(r"\b\w+\b", text)

    word_freq = Counter(words)

    most_common_words = word_freq.most_common(num_words)

    return most_common_words


file_path = "file.txt"
top_words = get_most_frequent_words(file_path)

print("Top 10 most frequent words:")
for word, freq in top_words:
    print(f"{word}: {freq} occurrences")
