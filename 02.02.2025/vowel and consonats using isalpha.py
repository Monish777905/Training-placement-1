def count_vowels_consonants(s):
    vowels = "aeiouAEIOU"
    vowel_count = sum(1 for char in s if char in vowels)
    consonant_count = sum(1 for char in s if char.isalpha() and char not in vowels)
    return vowel_count, consonant_count

def main():
    s = input("Enter a string: ")
    vowels, consonants = count_vowels_consonants(s)
    print(f"Vowels: {vowels}, Consonants: {consonants}")

if __name__ == "__main__":
    main()
