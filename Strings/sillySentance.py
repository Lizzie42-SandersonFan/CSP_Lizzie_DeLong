# Lizzie DeLong, Silly Sentances Python

# Need three inputs to use and put into a MidLibs thing. Try and find a way to use cancatination
# NAME was off to school, and to get there, they rode a(n) ANIMAL to get there. 
# After completing the first half of their classes, they got to eat FOOD for lunch.

print("Hello! This is a program that is a mini MadLibs.")
print("This woun't take very long, just a few minutes!")
aName = input("Need a Name:\n").strip().capitalize()
madLibSectionOne = " was off to school, and to get there, they rode a(n) "
anAnimal = input("Now an Animal:\n").strip().capitalize()
madLibSectionTwo = " to get there. "
madLibSectionThree = "After completing the first half of their classes, they got to eat "
aFood = input("Lastly, a Food:\n").strip().capitalize()
madLibSectionFour = " for lunch."
print(aName+madLibSectionOne+anAnimal+madLibSectionTwo+madLibSectionThree+aFood+madLibSectionFour)