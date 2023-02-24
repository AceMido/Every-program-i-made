from PIL import Image , ImageFilter

img=Image.open("D:\Programming\CS50\week_6\souls.jpg")

after=img.convert("L")

after.show()