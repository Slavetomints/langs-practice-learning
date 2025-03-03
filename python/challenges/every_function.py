states = ['Illinois', 'Missouri', 'Arkansas', 'Tennessee', 'Idaho', 'Washington', 'Alaska']
print(states)

print(f'I live in {states[0]}.')

# Changing Tennessee to Texas
states[3] = 'Texas'
print(states)

# Adding cali
states.append('California')
print(states)

# inserting nevada
states.insert(4, 'Nevada')
print(states)

# deleting someone
del states[6]
print(states)

# popping the end
popped_state = states.pop()
print(f'{popped_state} got popped')

# removing idaho
states.remove('Idaho')
print(states)

# punting texas
too_ick = 'Texas'
states.remove(too_ick)
print(states)
print(f'{too_ick} is too ick for me.')

# sorting fun
print(sorted(states))
print(sorted(states, reverse=True))
states.sort()
print(states)
states.sort(reverse=True)
print(states)
states.sort(reverse=False)
print(states)
