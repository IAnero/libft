Libft
📝 Description

Libft is the first project at 42.
It is a custom C library that re-implements standard libc functions, and also provides utilities for strings, memory handling, file descriptors, and linked lists.
This library is used as a foundation for future projects at 42.

📂 Content

Character checks: ft_isalpha, ft_isdigit, ft_isprint, etc.

String manipulation: ft_strlen, ft_strdup, ft_strjoin, etc.

Memory functions: ft_memset, ft_memcpy, ft_memmove, etc.

File descriptors: ft_putchar_fd, ft_putstr_fd, ft_putnbr_fd, etc.

Linked lists: ft_lstnew, ft_lstadd_back, ft_lstmap, etc.

⚙️ Usage

Clone this repository
```
git clone <your_repo_url>
cd libft
```

Compile the library
```
make
```

This will create libft.a.

Compile your program with it:
```
gcc main.c -L. -lft
```
✅ Status

Project done as part of the 42 cursus.
This library will grow with more projects.
