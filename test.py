#dict = {key: value, key: value}
actions = {"r":1, "l":-1}
print(actions)

print(actions["r"])
print(actions.get("g"))

actions["r"] = 2
actions["u"] = 1
print(actions)

print(actions.items())
print(actions.keys())
print(actions.values())

del(actions["u"])
print(actions)

actions.pop("r")
print(actions)

print("l" in actions)
