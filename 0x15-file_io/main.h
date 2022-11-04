#ifndef FILE_I_O
#define FILE_I_O

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
