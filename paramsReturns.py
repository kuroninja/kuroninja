position = 0

def move_player(position, by_amount):
  position += by_amount
  return position

position = move_player(position, 5)
position = move_player(position, 2)
print(position)
