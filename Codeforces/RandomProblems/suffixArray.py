# x = str(input())

def output(n):
    dictOfThings = {}
    for i in range(len(n)):
        dictOfThings[n[i:]] = i

    print(dictOfThings)

    for value in sorted(dictOfThings.keys()):

        print(dictOfThings[value], end=" ")


output("ababba")