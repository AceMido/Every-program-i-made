from flask import Flask,render_template,request

#app wil be the result of calling the Flask function and passing it
#__name__ which refers to the name of the current file
app=Flask(__name__)


# @app.route("/") is 
# a Python decorator that 
# Flask provides to assign URLs in our app to functions easily.
#  It's easy to understand what is happening at first glance: 
#  the decorator is telling our @app that whenever a user visits our app domain (myapp.com) at the given .route(), execute the home() function.
@app.route("/")
def index():

    return render_template("index.html")



@app.route("/greet",methods=["POST"])
def greet():
    #get function can have a default value if there is no value given
    name=request.form.get("name","unknown")
    return render_template("greet.html",name=name)