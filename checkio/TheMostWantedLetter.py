# -*- coding: utf-8 -*-


def checkio(text: str) -> str:
    text = text.lower()
    word_freq_dict = {}
    for letter in text:
        if letter not in word_freq_dict:
            word_freq_dict[letter] = 0
        word_freq_dict[letter] += 1
    key_sort = sorted(word_freq_dict.items(), key=lambda x: x[1], reverse=True)
    key_tmp = 'z'
    num_tmp = 0
    for key, num in key_sort:
        if ord('a') <= ord(key) <= ord(key_tmp) and num >= num_tmp:
            key_tmp = key
            num_tmp = num
    return key_tmp


if __name__ == '__main__':
    print("Example:")
    print(checkio("Hello World!"))

    #These "asserts" using only for self-checking and not necessary for auto-testing
    assert checkio("Hello World!") == "l", "Hello test"
    assert checkio("How do you do?") == "o", "O is most wanted"
    assert checkio("One") == "e", "All letter only once."
    assert checkio("Oops!") == "o", "Don't forget about lower case."
    assert checkio("AAaooo!!!!") == "a", "Only letters."
    assert checkio("abe") == "a", "The First."
    print("Start the long test")
    assert checkio("a" * 9000 + "b" * 1000) == "a", "Long."
    print("The local tests are done.")
