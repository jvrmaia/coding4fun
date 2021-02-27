T = int(raw_input())

def verify_winner(line, completed):
    x, o, t, p = count(line)
    winner = None
    if x + t == 4:
        winner = "X won"
    elif o + t == 4:
        winner = "O won"
    elif p > 0:
        completed = False
    return [winner, completed]

def count(line):
    x = o = t = p = 0
    for i in line:
        if i == "X": x += 1
        if i == "O": o += 1
        if i == "T": t += 1
        if i == ".": p += 1
    return [x,o,t,p]

for test in range(1, T + 1):
    board = []
    for i in range(4):
        board.append(raw_input())
    raw_input()

    completed = True
    winner = None

    for line in board:
        if winner is None:
            winner, completed = verify_winner(line, completed)
        else:
            break

    if winner is None:
        d1 = ""
        d2 = ""
        for i in range(4):
            d1 += board[i][i]
            d2 += board[3-i][i]

        winner, completed = verify_winner(d1, completed)
        if winner is None: winner, completed = verify_winner(d2, completed)

    if winner is None:
        for line in zip(*board):
            if winner is None:
                winner, completed = verify_winner(line, completed)
            else:
                break

    if winner is None:
        if completed:
            winner = "Draw"
        else:
            winner = "Game has not completed"

    print "Case #%d: %s" % (test, winner)

