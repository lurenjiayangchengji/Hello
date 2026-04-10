class Human:
    def __init__(self):
     name=""
     sex=''
    def set_name(self,h):
        self.name=h
    def get_name(self):
        print(self.name)
h=Human()
h.set_name("zhangsa")
h.get_name()