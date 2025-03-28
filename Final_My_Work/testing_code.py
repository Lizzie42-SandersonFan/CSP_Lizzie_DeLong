import time
delay = 0.04

message6 = "As the door slowly creaks open, you peer out into a long hallway.\n"\
"The hallway is dimly lit and has wallpaper that looks as though it is from an old orphanage.\n"\
"You walk down the hall and find a door with the words “TOO LATE” scribbled on it.\n"\
"\n"

# function to print the message slowly.
for char in message6:
    print(char, end="", flush=True)
    time.sleep(delay)
