# Lizzie DeLong, Time of Day Python
from datetime import datetime

timeOfDay = input("What time is it for you (12 hour format with AM/PM):\n")

# Converting the time to military time (24 hour format)
def convert24(time):
    t = datetime.strptime(time, '%I:%M %p')
    return t.strftime('%H:%M')

# 5 am to 10:30 am is good morning
# 10:31 am to 4:30 pm is good afternoon
# every other time is good evening
if timeOfDay >= "4:00" and timeOfDay <= "10:30":
    print("Good Morning!")
elif timeOfDay >= "10:31" and timeOfDay <= "16:30":
    print("Good Afternoon!")
else:
    print("Good Evening!")

print(convert24(timeOfDay)) 
# /\/\ This is for seeing that the convertion for comparison in the if statement is going right.