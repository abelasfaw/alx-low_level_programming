#ifndef IO_HEADERS
#define IO_HEADERS
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copy_file(const char *filefrom, const char *fileto);
#endif
