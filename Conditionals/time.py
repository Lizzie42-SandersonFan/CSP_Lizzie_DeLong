# Lizzie DeLong, How to get time
import time

#first instance of time in programing
first_time = time.gmtime()
# print(first_time)

#current time in seconds since January 1st, 1970
current = time.time()
# print(current)

#current sate and time like we see it normally
now  = time.ctime(current)
# print(now)

#getting a part of the time
localTime = time.localtime(current)
day = localTime.tm_wday
hour = localTime.tm_hour # In military time (0-23)
print(hour)