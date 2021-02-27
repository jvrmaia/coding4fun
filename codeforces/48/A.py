f = raw_input()
m = raw_input()
s = raw_input()

if f == m and m == s:
    print "?"
elif f != m and f != s and m != s:
    print "?"
elif f == m:
    if s == "rock":
        if f == "scissors":
            print "S"
        else:
            print "?"
    elif s == "paper":
        if f == "rock":
            print "S"
        else:
            print "?"
    else:
        if f == "paper":
            print "S"
        else:
            print "?"
elif f == s:
    if m == "rock":
        if f == "scissors":
            print "M"
        else:
            print "?"
    elif m == "paper":
        if f == "rock":
            print "M"
        else:
            print "?"
    else:
        if f == "paper":
            print "M"
        else:
            print "?"
elif m == s:
    if f == "rock":
        if m == "scissors":
            print "F"
        else:
            print "?"
    elif f == "paper":
        if m == "rock":
            print "F"
        else:
            print "?"
    else:
        if m == "paper":
            print "F"
        else:
            print "?"
else:
    if f == "rock":
        if m == "paper":
            print "M"
        elif s == "paper":
            print "S"
        else:
            print "F"
    if f == "scissors":
        if m == "rock":
             print "M"
        elif s == "rock":
            print "S"
        else:
            print "F"
    if f == "paper":
        if m == "scissors":
              print "M"
        elif s == "scissors":
            print "S"
        else:
            print "F"
