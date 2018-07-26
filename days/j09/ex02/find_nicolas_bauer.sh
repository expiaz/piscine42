cat contacts_hard.txt | grep -i -E "^nicolas\s+bauer" | grep -E -o "(\d(\.|-)?)?(\(\d{3}\))?(\d{3}(\.|-))+\d{4}"
