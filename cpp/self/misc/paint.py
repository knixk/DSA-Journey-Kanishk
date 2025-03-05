def no_cans_req(height, width, coverage):
	area = height * width
	no_cans = round(area / coverage)
	return no_cans

height = 20
width = 6
coverage = 2

ans = no_cans_req(height, width, coverage)

print(ans)

