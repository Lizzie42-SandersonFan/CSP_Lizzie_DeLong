# Lizzie DeLong, FizzBuzz in Python

for num in range(1,51):
    words = []
    if num % 3 == 0:
        words.append("Fizz")
    if num % 5 == 0:
        words.append("Buzz")
    if not words:
        print(num)
    else:
        print(''.join(words))
