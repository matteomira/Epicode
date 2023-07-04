
def password_generator():
    import string
    import secrets
    password = ""

    if scelta == 1: # il valore 1 corrisponde all'opzione "semplice" nel menu di scelta
        for x in range(4):
            password += secrets.choice(string.ascii_letters)
            password += secrets.choice(string.digits)
    else:
        for x in range(5):
            password += secrets.choice(string.ascii_lowercase)
            password += secrets.choice(string.digits)
            password += secrets.choice(string.punctuation)
            password += secrets.choice(string.ascii_uppercase)
    return password    
