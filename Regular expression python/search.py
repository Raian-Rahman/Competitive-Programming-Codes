import re 

string = input()

pattern = '\.\w\w\w'

match_pattern = re.search(pattern,string)

if match_pattern:
     print(match_pattern.group())
else:
     print('not found!')