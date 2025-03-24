# Final project, River Stanley, Lila Shearer, chiara  

# Things to fix or add
    # Make it so if a user answers incorrectly, it will ask the question again instead of moving to the next question.
    # Make it so that the oven temp will change the variable number of cakeStat

#Chiara variables
cakeFlavor=1
frostingFlavor=2

#River varables
cakepan=1
cakeStat= 2
ovenTemp = 0

#Lizzie variables
frostPiped=1
allToppings = ["sprinkles", "strawberries", "fudge sauce"]
isSprinkles = False
isStrawberries = False
isFudge = False
notoppings = 0
toppings = 0
response = 0
explanationMessage = 0
customerAnswer = 0

#welcome banner, intro 
print("\nWelcome to baking simulator.\nIn this game you will get to bake a cake and have a critic try it.\nThe critic will give feedback based on your cake.\nYour goal is to have the critic love your cake!\n")

#Chiara What kind of cake? EX: vanilla, chocolate, strawberry 
# 1 = vanilla, 2 = choco, 3 = strawberry
flavorChoice= input("What kind of cake would you like to make?\n (1 a vanilla cake\n (2 a chocolate cake\n (3 A strawberry cake\n")

if flavorChoice == "1":
    cakeFlavor = 1
elif flavorChoice == "2":
    cakeFlavor = 2
elif flavorChoice == "3":
    cakeFlavor = 3
else:
    print("We can't make that kind of cake.\n")

#Chiara what kind of frostingFlavor EX: Buttercream, cream cheese, swiss meringue
# 1 = buttercream, 2 = cream cheese, 3 = swiss meringue
frosttype= input(" What type of frosting do you want on your cake?\n (1 A buttercream frosting \n (2 A cream cheese frosting\n (3 A swiss meringue frosting\n")

if frosttype == "1":
    frostingFlavor = 1
elif frosttype == "2":
    frostingFlavor = 2
elif frosttype == "3":
    frostingFlavor = 3
else:
    print("We don't have that kind of frosting.\n")
    exit()

#River Cake pans circle, square, cupcakes 
#Has user pick a kind of cake
# 1 = circle, 2 = square, 3 = cupcakes  
shape=input("What kind of kind of cake will you bake?\n (1 A circle cake\n (2 a square cake\n (3 multi tier cake\n")

if shape == "1":
    cakepan = 1
elif shape == "2":
    cakepan = 2
elif shape == "3":
    cakepan = 3
else:
    print("We don't have that kind of cake pan.\n")

#River temperature EX: 325-375 normal bake, under is underbaked, over by like 20 is overbaked any further is broken and on fire oven
# 1 = underbaked, 2 = perfect, 3 = overbaked
# make temp a conditional
# if checks if overbaked (majorly)

# temp a conditional
# checks the how the cake is cooked by what temp the user puts in

temp=int(input("What temperature will you set the oven?\n"))   
if temp>=350 and temp<=375: 
    temp=2
    print("Your cake is perfect!")
elif temp<349:
     temp = 1
     print("Your cake is a little undercooked but it will work\n")
elif temp>376 and temp<420:
     temp=3
     print("Your cake is a little overcooked but it will work\n")  
     
else:
     print("The oven has lit on fire and burned down the bakery, game over")
     exit()


#Lizzie frosting EX: pipped on, spooned on, none 
# 1 = piped, 2 = spooned, 3 = none
frostPiped = input("How would you like to frosting applied:\n 1. Piped \n 2. Spooned on \n 3. No frosting \n")
if frostPiped == "1":
    frostPiped = 1
elif frostPiped == "2":
    frostPiped = 2
else:
    frostPiped = 3
    
#Lizzie toppings EX: sprinkles, strawberries, fudge sauce
# use a loop to loop through all topping options
# use a funtion to print out all topping request statement
def toppingRequest(theTopping):
    global response
    response = input(f"Would you like {theTopping} (Yes or No)?\n").strip().upper()

for item in allToppings:
    toppingRequest(item)
    if item == "sprinkles" and response == "YES":
        isSprinkles = True
    elif item == "strawberries" and response == "YES":
        isStrawberries = True
    elif item == "fudge sauce" and response == "YES":
        isFudge = True
    else:
        isSprinkles = False
        isStrawberries = False
        isFudge = False

#Lila results EX: The customer loved your (size, flavor, topping) cake! The custom demanded a refund as their cake was over/under baked
# change type for each variable. Use if statement to replace number with what it is (ex: if cakeFlavor = 1 then change it to cakeFlavor = 'chocolate')
# Use function to print out The customer (love, liked, dislike, hated) your (size) (flavor) cake with (frostingFlavor type) frostingFlavor and (topping or no toppings)
print("\nIt's time to present your creation!\n") 
#This part of my code sets the variable to be the choice the user made so that my print statement runs smoothly.
if frostingFlavor == 1:
    frostingFlavor = "buttercream"
elif frostingFlavor == 2:
    frostingFlavor = "cream cheese"
else:
    frostingFlavor = "swiss meringue"

if cakeFlavor == 1:
    cakeFlavor = "vanilla"
elif cakeFlavor == 2:
    cakeFlavor = "chocolate"
else:
    cakeFlavor = "strawberry"

if cakepan == 1:
    cakepan = "circle"
elif cakepan == 2:
    cakepan = "square"
else:
    cakepan = "multi-tiered"

if frostPiped == 1:
    frostPiped = "very nice looking"
elif frostPiped == 2:
    frostPiped = "decent looking"
else:
    frostPiped = "nonexistant"

# This part of my code sets the toppings variable in my print statement so that it prints correctly
if isSprinkles == True and isStrawberries == True and isFudge == True:
    toppings = " sprinkles, strawberries, and fudge"
elif isSprinkles == True and isStrawberries == True and isFudge == False:
    toppings = " sprinkles and strawberries"
elif isSprinkles == True and isStrawberries == False and isFudge == True:
    toppings = " sprinkles and fudge"
elif isSprinkles == False and isStrawberries == True and isFudge == True:
    toppings = " strawberries and fudge"
elif isSprinkles == True and isStrawberries == False and isFudge == False:
    toppings == " sprinkles"
elif isSprinkles == False and isStrawberries == True and isFudge == False:
    toppings = " strawberries"
elif isSprinkles == False and isStrawberries == False and isFudge == True:
    toppings = " fudge"
else:
    toppings = " no toppings"


# This part of my code decides how the critic will respond by looking at what decisions werre made
if frostPiped == "very nice looking" and cakeStat == 2 and toppings != " no toppings":
    customerAnswer = "LOVED"
    explanationMessage = "Your cake was perfect!"
elif frostPiped == "very nice looking" and cakeStat == 2 and toppings == " no toppings":
    customerAnswer = "enjoyed"
    explanationMessage = "Your cake was very good, but it was a little boring on the outside."
elif frostPiped == "nonexistant" and cakeStat == 2 or frostPiped == "nonexistant" and toppings != " no toppings":
    customerAnswer = "sort of enjoyed"
    explanationMessage = "Your cake was lacking in some areas."
elif frostPiped == "very nice looking" and cakeStat >=1:
    customerAnswer = "liked"
    explanationMessage = "A few things could be improved, but overall you did a pretty good job. Consider watching the oven more closely next time."
elif frostPiped == "decent looking" and cakeStat == 2:
    customerAnswer = "liked"
    explanationMessage = "A few things could be improved, but overall you did a pretty good job. Consider improving your method for putting frosting on the cake."
else:
    customerAnswer = "hated"
    explanationMessage = "Your cake was not very good. It was lacking in several areas and was not enjoyable."

# This part of my code is the response. It takes the user's choices and puts them into a print statement.
def customerResponse(customerAnswer,cakepan,cakeFlavor,frostPiped,frostingFlavor,toppings, explanationMessage):
    print(f'The critic {customerAnswer} your {cakepan} {cakeFlavor} cake with {frostPiped} {frostingFlavor} frosting and{toppings}. {explanationMessage}')

customerResponse(customerAnswer, cakepan, cakeFlavor, frostPiped, frostingFlavor, toppings, explanationMessage)


print("\nThank you for playing baking simulator!\n")