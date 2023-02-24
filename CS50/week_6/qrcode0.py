import qrcode

img=qrcode.make("hello world")
img.show()
#to save the photo
#img.show("imagename.png")