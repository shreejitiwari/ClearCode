s = set()
com = com = ('not null', 'default', 'unique', 'primary')

for i in com:
	for j in com:
		if i != j:
			e = str(sorted([i,j]))
			s.add(e)

for i in s:
                print(i)
