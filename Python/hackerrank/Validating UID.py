###################
# mine solution
import re
n = int(input())
for i in range(n):
    user_string = input()
    upper_check = r'([A-Z]){2,}'
    digit_check = r'([0-9]){3,}'
    alpha_check_and_length_check = r'([a-zA-Z0-9]){10}$'
    repeat_check = r'.*([a-zA-Z0-9]).*\1'

    upper_check_result = bool(re.findall(upper_check,user_string))
    digit_check_result = bool(re.findall(digit_check,user_string))
    alpha_check_and_length_check_result = bool(re.findall(alpha_check_and_length_check,user_string))
    repeat_check_result = bool(re.findall(repeat_check,user_string))
    print(bool(upper_check_result))
    print(bool(digit_check_result))
    print(bool(alpha_check_and_length_check_result))
    print(bool(repeat_check_result))
    if upper_check_result and digit_check_result and alpha_check_and_length_check_result and not repeat_check_result:
        print('Valid') 
    else:
        print('Invalid')

######################################
# others sol

import re
n = int(input())
upper_check = r'.*([A-Z].*){2,}'
digit_check = r'.*([0-9].*){3,}'
alphanumeric_and_length_check = r'([A-Za-z0-9]){10}$'
repeat_check = r'.*(.).*\1'
for i in range(n):
    uid_string = input().strip()
    upper_check_result = bool(re.match(upper_check, uid_string))
    digit_check_result = bool(re.match(digit_check, uid_string))
    alphanumeric_and_length_check_result = bool(
        re.match(alphanumeric_and_length_check, uid_string))
    repeat_check_result = bool(re.match(repeat_check, uid_string))
    if upper_check_result and digit_check_result and alphanumeric_and_length_check_result and not repeat_check_result:
        print('Valid')
    else:
        print('Invalid')
