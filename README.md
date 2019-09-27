# Programmming: Principals and Practice Using C++, 2nd Ed. Notes

Although most of the notes associated with the reading of this book will be
notes/highlights in the book itself, this README will server as
"digital scratch paper" for any "general" notes while working through the book.

## Chapter 2 Notes

* To compile: `g++ -std=c++11 -o <executable_filename> <input_c++_filename>.cpp`

## Chapter 3 Notes

* On OSX (currently on 10.14.6), there are multiple different compilers in
`/usr/bin`. The `c++` "compiler" is not actually a compiler, but rather a
symlink to the `clang++` compiler. Other compilers include `g++` and `gcc`.

* `if`-statements don't **need** brackets (`{}`) if there is only one conditional
statement.

	```c++
	if (x % 15 == 0) cout << x << " is a multiple of 15.\n"
	```

	```c++
	if (x % 15 == 0)
		cout << x << " is a multiple of 15.\n"
	```

	```c++
	if (x % 15 == 0) {
		cout << x << " is a multiple of 15.\n"
	}
	```

* Incrementing (`++`) or decrementing (`--`) can be used as a prefix or suffix
(i.e. `++x` or `x++`). Using `x++` increments the value of variable `x` **after**
processing the current statement, while `++x` increments the value of variable
`x` **before** processing the current statement. [Link](https://stackoverflow.com/questions/1812990/incrementing-in-c-when-to-use-x-or-x)
