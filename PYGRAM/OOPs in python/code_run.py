class VSC:
    def execute(self):
        print('Running...')
        print('Code executed successfully..!!')

class Laptop:
    def code(self, ide):
        ide.execute()

Laptop().code(VSC())        