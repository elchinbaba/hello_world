from distutils.core import setup, Extension

def main():
    setup(name="hello_world",
          version="1.0.0",
          description="Python interface for the hello_world C library function",
          author="Elchin Babali",
          author_email="babalielchin@gmail.com",
          ext_modules=[Extension("hello_world", ["hello_world.c"])])

if __name__ == "__main__":
    main()