# Generic message writer

# Type message
int8 BOTH      =  0 # Left and right message (All lines splitted in both display)
int8 LEFT      =  1 # Left screen
int8 RIGHT     =  2 # Right screen
int8 display

# Type message
int8 FULL      =  0 # all messages line by line (5 lines for display)
int8 WIDE      =  1 # one string screen (Will be read only the first two lines)
int8 TWO_LINES =  2 # two strings screen (Will be read only the first array)
int8 type

# Message to send
# 0 - 5 = left display
# 6 - 11 = right display
string[] message

# Timeout show message
int64 INF = -1  # No timeout message
int64 timeout
