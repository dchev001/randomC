print("License Plate: ")
foo = input()

# check string length <= 6 and length >= 2
if (len(foo) <= 6 and len(foo) >= 2):

  # if string contains all letters
  if (foo.isalpha()):
    print("Valid! Congratulations on your new license plate.")

  # string contains letters and numbers
  else:
    # iterate through letters first
    i = 0
    while (foo[i].isalpha()):
      i = i + 1

    # if first two characters are letters
    if (i >= 2):
      # if first number is '0'
      if (foo[i] == '0'):
        print("Not Valid!")
      else:
        # check if rest is number
        if (foo[i:].isdigit()):
          print("Valid! Congratulations on your new license plate.")
        else:
          print("Not Valid!")
    else:
      print("Not Valid!")
else:
  print("Not Valid!")
