n = int(raw_input())

t = dict()
t['a']="2"
t['b']="22"
t['c']="222"

t['d']="3"
t['e']="33"
t['f']="333"

t['g']="4"
t['h']="44"
t['i']="444"

t['j']="5"
t['k']="55"
t['l']="555"

t['m']="6"
t['n']="66"
t['o']="666"

t['p']="7"
t['q']="77"
t['r']="777"
t['s']="7777"

t['t']="8"
t['u']="88"
t['v']="888"

t['w']="9"
t['x']="99"
t['y']="999"
t['z']="9999"

t[' ']="0"

def same_input(a, b):
    if a == b:
        return True
    if (a in "abc") and (b in "abc"):
        return True
    if (a in "def") and (b in "def"):
        return True
    if (a in "ghi") and (b in "ghi"):
        return True
    if (a in "jkl") and (b in "jkl"):
        return True
    if (a in "mno") and (b in "mno"):
        return True
    if (a in "pqrs") and (b in "pqrs"):
        return True
    if (a in "tuv") and (b in "tuv"):
        return True
    if (a in "wxyz") and (b in "wxyz"):
        return True
    return False

def spelling(msg):
    ret = ""
    for i, c in enumerate(msg):
        if i > 0:
            if same_input(msg[i - 1], c):
                ret += " "
            ret += t[c]
        else:
            ret += t[c]
    return ret

for i in xrange(1, n + 1):
    line = raw_input()
    print "Case #%d: %s" % (i, spelling(line))
