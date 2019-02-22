CTB - Cheeger Tool Box (by Kai Renken, 2019)


- What CTB does

CTB provides various tools to calculate the norm and the cosystolic norm of cochains and the Cheeger constants of a simplex.


- How to use

Just clone to a local directory and include 'Matrix.h' and 'basics.h' from 'headers' to your project ('Matrix.cpp' and 'basics.cpp' from 'sources' have to be added and compiled as well) to use all the provided functions. Further information how to use the functions can be found in the headers.
For further information about the theory behind CTB see 'https://github.com/KaiRenken/Diss'.

Notice: CTB has been build using MinGW Version 5.3.0.

- Tests

PCN has been tested using the Catch2 framework (see: 'https://github.com/catchorg/Catch2').

In 'tests' compile 'tests-main.cpp' only once, then compile one (ONLY ONE!) of the '.cpp'-files from 'tests' and all files from 'sources' and link all produced '.o' files to built a testing application.
