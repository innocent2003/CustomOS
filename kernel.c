volatile char *video = (volatile char*)0xB8000;

void print(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        video[i * 2] = str[i];
        video[i * 2 + 1] = 0x07;
        i++;
    }
}

void kernel_main()
{
    print("Hello from MyOS!");
}