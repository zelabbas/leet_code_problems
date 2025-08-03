import os
import random

for test in range(2):
    for i in range(501):
        args = list(range(i))
        if (len(args) < 1):
            continue
        args.append()
        if (test == 0):
            args = args[::-1]
        else:
            random.shuffle(args)
        args = map(str, args)
        cmd = "../push_swap " + (" ".join(args)) + " > out"
        os.system(cmd)
        out = len(open("out").read().split("\n"))
        if len(args) == 100 and out > 700:
            print (cmd)
            exit()
        if len(args) >= 500 and out > 5500:
            print (cmd)
            exit()
        print("OK", out, len(args))