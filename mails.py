import smtplib

sendermail=input("Sender : ")
reciever_mail=input("Reciever : ")

subject="First mail"
message="Hello World"

text=f"Subject: {subject} \n\n {message}"

server=smtplib.SMTP("smtp.gmail.com",587)
server.starttls()
server.login(sendermail, "eactxaxvqgtracdh")

server.sendmail(sendermail,reciever_mail,text)