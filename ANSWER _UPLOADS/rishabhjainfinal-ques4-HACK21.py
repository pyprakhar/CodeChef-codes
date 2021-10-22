n = int(input())

pairs = {
    "{": "}",
    "(": ")",
    "[": "]",
}

for i in range(n):
    elements = list(input())
    count = 0
    list1 = []
    isforword = True
    for element in elements:
        if element in pairs.keys() and isforword:
            list1.append(element)
        else:
            isforword = False
            if list1 and element == pairs[list1[-1]]:
                list1.pop()
                if list1 == []:
                    count += 1
            else:
                isforword = True
                list1 = []
        # print(element, count, "".join(list1))
    print(count)
