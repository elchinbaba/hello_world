from distutils.core import setup, Extension

def main():
    setup(name="identity",
          version="1.0.0",
          description="Python interface for identity function in C++",
          author="Elchin Babali",
          author_email="babalielchin@gmail.com",
          ext_modules=[Extension("identity", ["identity.cpp"])])

if __name__ == "__main__":
    main()