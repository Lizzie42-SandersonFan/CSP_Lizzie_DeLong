# Final project, River Stanley, Lila Shearer,

#Chiara variables
cakeFlavor=1
frosting=2

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

#welcome banner, intro 
print("\nWelcome to baking simulator. In this game you will get to bake a cake and have a critic try it. The critic will give feedback based on your cake!")
#customer speech EX: Bake me your best cake!

#Chiara What kind of cake? EX: vanilla, chocolate, strawberry 
# 1 = vanilla, 2 = choco, 3 = strawberry
flavor= input("What kind of cake would you like to make?\n (1 a vanilla cake\n (2 a Chocolate cake\n (3 A strawberry cake\n)")
if flavor != "1" and flavor != "2" and flavor != "3":
    print("We don't have the ingredients to make that type of cake.\n")
elif flavor == 1:
    cakeFlavor=1
elif flavor == 2:
    cakeFlavor = 2
else: 
    cakeFlavor=3

#Chiara what kind of frosting EX: Buttercream, cream cheese, swiss meringue
# 1 = buttercream, 2 = cream cheese, 3 = swiss meringue
frosttype= input(" What type of frosting do you want on your cake?\n (1 A buttercream frosting \n (2 A cream cheese frosting\n (3 A swiss meringue frosting\n")

if frosttype != "1" and frosttype != "2" and frosttype != "3":
    print(" We don't have this type of frosting in stock.\n")
elif frosttype== 1:
    frosting=1
elif frosttype==2:
    frosting=2
else:
    frosting = 3


#River Cake pans circle, square, cupcakes 
#Has user pick a kind of cake
# 1 = circle, 2 = square, 3 = cupcakes  
shape=input("What kind of kind of cake will you bake? (1 A circle cake\n (2 a square cake\n  (3 multi tier cake\n")

if shape!="1" and shape!="2" and shape!="3":
    print("We dont have that kind of cakepan\n")   
# elif shape == 1:
#   cakepan = 1     

#River temperature EX: 325-375 normal bake, under is underbaked, over by like 20 is overbaked any further is broken and on fire oven
# 1 = underbaked, 2 = perfect, 3 = overbaked
# make temp a conditional
# if checks if underbacked (majorly)

# temp a conditional
# checks the how the cake is cooked by what temp the user puts in

temp=int(input("What temperature will you set the oven?\n"))   
if temp>=320 and temp<=375: 
    temp=2
    print("Your cake is perfect!")
elif temp<319:
     temp = 1
     print("Your cake is a little undercooked but it will work\n")
elif temp<375:
     temp=3
     print("Your cake is a little overcooked but it will work\n")    
else:
     print("The oven has lit on fire and burned down the bakery, game over")
     exit()


#Lizzie frosting EX: pipped on, spooned on, none 
# 1 = piped, 2 = spooned, 3 = none
frostPiped = input("How would you like to frosting applied:\n 1. Piped \n 2. Spooned on \n 3. No frosting \n")

#Lizzie toppings EX: sprinkles, strawberries, fudge sauce
# use a loop to loop through all topping options
# use a funtion to print out all topping request statement
def toppingRequest(theTopping):
    global response
    response = input(f"Would you like {theTopping} (Yes or No)?\n").strip().capitalize()

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

    print(isSprinkles)
    print(isStrawberries)
    print(isFudge)

#Lila results EX: The customer loved your (size, flavor, topping) cake! The custom demanded a refund as their cake was over/under baked
# change type for each variable. Use if statement to replace number with what it is (ex: if cakeFlavor = 1 then change it to cakeFlavor = 'chocolate')
# Use function to print out The customer (love, liked, dislike, hated) your (size) (flavor) cake with (frosting type) frosting and (topping or no toppings)
print("\nIt's time to present your creation!\n") 

if frosting == 1:
    frosting = "buttercream"
elif frosting == 2:
    frosting = "cream cheese"
else:
    frosting = "swiss meringue"

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

toppings = []  # Start with an empty list for toppings

if isSprinkles == True:
    toppings.append("sprinkles")
if isStrawberries == True:
    toppings.append("strawberries")
if isFudge == True:
    toppings.append("fudge")
if len(toppings) == 0:
    toppings = " no toppings"
else:
    # If there are multiple toppings, add 'and' between the last two
    if len(toppings) > 1:
        toppings[-1] = "and " + toppings[-1]
    # Join the toppings with commas
    toppings = ', '.join(toppings)


#This is my code for the response
if frostPiped == "very nice looking" and cakeStat == 2:
    response = "loved"
elif frostPiped == "very nice looking" and cakeStat == 1 or cakeStat == 2:
    response = "liked"
elif frostPiped == "decent looking" and cakeStat == 2:
    response = "liked"
elif frostPiped == "nonexistant" and cakeStat == 2:
    response = "almost enjoyed"
else:
    response = "hated"


def customerResponse(response,cakepan,cakeFlavor,frostPiped,frosting,toppings):
    print(f'The customer {response} your {cakepan} {cakeFlavor} cake with {frostPiped} {frosting} frosting and{toppings}.')

customerResponse(response, cakepan, cakeFlavor, frostPiped, frosting, toppings)

print("\nThank you for playing baking simulator!")