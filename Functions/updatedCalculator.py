# Lizzie DeLong, Updated Python Financial Claculator with Functions

def userInputs(expense):
    return float(input(f"What is your monthly {expense}:\n"))

def calculatePercents(expenceOne, expenseTwo):
    return float(expenceOne/expenseTwo)*100

print("Hello! This is your new personal financial calculator to help you with your money!")

income = userInputs("income")
rent = userInputs("rent/morage payment")
utilities = userInputs("utilities payment")
groceries = userInputs("groceries spending")
transport = userInputs("transportaion spending")
savings = income*0.1
spending = income-savings-rent-utilities-groceries-transport

rentPercent = calculatePercents(rent, income)
utilitiesPercent = calculatePercents(utilities, income)
groceriesPercent = calculatePercents(groceries, income)
transportPercent = calculatePercents(transport, income)
spendingPercent = calculatePercents(spending, income)

answer = input("Horray! Ready for your results? \n")

print("Your rent is", rent, "dollars which is", rentPercent, "percent of your income.")
print("Your utilities bill is", utilities, "dollars which is", utilitiesPercent, "percent of your income.")
print("Your groceries spending is", groceries, "dollars which is", groceriesPercent, "percent of your income.")
print("Your transportion cost is", transport, "dollars which is", transportPercent, "percent of your income.")
print("The savings you should put away every month is", savings, "which is 10 percent of your income.")
print("Your spending money is", spending, "dollars which is", spendingPercent, "percent of your income.")