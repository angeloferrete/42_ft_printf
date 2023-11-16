# 42_ft_printf

# **ft_printf**
This project was graded <strong>100/100</strong>.


## 📒 **About**
You know the rules: if a function is not allowed, you can't use it. It sucks right? Well, this is your chance to implement printf()! You'll be able to use it in the following projects, alongside with the other functions you developed so far.

## 🚨 **Disclaimer**
At 42, the C projects are built following a bunch of rules that enforce good coding style. Some of them are:

	- No for, do while, switch, case or goto are allowed
	- No more than 25 lines per function and 5 functions per file
	- No assigns and declarations in the same line (unless static)
	- No more than 5 variables in 1 function
	... 

## 🔧 **Implementation**
> Unfortunately I implemented the bonus in the same files as the mandatory, so everything will be mixed up

<table>
	<thead>
		<tr>
			<th>Part</th>
			<th>File Name</th>
			<th>Functionality</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td rowspan = 11><strong>Mandatory</strong></td>
			<td>libft/</td>
			<td>Contains the files from the libft project</td>
		</tr>
		<tr>
			<td>ft_itoa.c</td>
			<td>Contains the function to convert integers to chars</td>
		</tr>
		<tr>
			<td>ft_itoa_u.c</td>
			<td>Contains the function to convert integers to chars</td>
		</tr>
		<tr>
			<td>ft_printf_utils_chars.c</td>
			<td>Contains the utilitary functions for char, developed specifically for this project</td>
		</tr>
		<tr>
			<td>ft_printf_utils_nbrs.c</td>
			<td>Contains the utilitary functions for numbers, developed specifically for this project</td>
		</tr>
		<tr>
			<td>ft_printf.c</td>
			<td>Contains the ft-printf function (main loop) and a function to redirect conversions</td>
		</tr>
		<tr>
			<td>ft_printf.h</td>
			<td>Contains the prototypes of every function specifically developed for this project</td>
		</tr>
	</tbody>
</table>


## 📦 **Compilation**
To compile the library run `make` in the terminal. `make` will compile and link all files together.

Dont forget to include the `.h` files!

