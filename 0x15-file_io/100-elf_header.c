/*
 * File: 103-find_loop.c
 * Auth: Blessings Moyo
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * main -  program that displays the information contained
 * in the ELF header at the start of an ELF file.
 *
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0.
*/

int main(int argc, char **argv)
{
	char magic[4];
	int init = open(argv[1], O_RDONLY);
	Elf64_Ehdr eh;
	
	if (argc != 2)
	{
        	fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        	return (98);
	}
	if (init < 0)
	{
		fprintf(stderr, "Failed to open file %s\n", argv[1]);
        	return (98);
	}
	if (read(init, magic, sizeof(magic)) != sizeof(magic))
	{
		fprintf(stderr, "Failed to read magic from file %s\n", argv[1]);
        	close(init);
		return (98);
	}
	if (memcmp(magic, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "File %s is not an ELF file\n", argv[1]);
		close(init);
		return (98);
	}
	if (lseek(init, 0, SEEK_SET) != 0)
	{
		fprintf(stderr, "Failed to seek to beginning of file %s\n", argv[1]);
		close(init);
		return (98);
	}
	if (read(init, &eh, sizeof(eh)) != sizeof(eh))
	{
		fprintf(stderr, "Failed to read ELF header from file %s\n", argv[1]);
        	close(init);
		return (98);
    }

    printf("Magic: %02x %02x %02x %02x\n", magic[0], magic[1], magic[2], magic[3]);
    printf("Class: %d-bit\n", eh.e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);
    printf("Data: %s\n", eh.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version: %d\n", eh.e_ident[EI_VERSION]);
    printf("OS/ABI: %s\n", eh.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX System V ABI" : "Other");
    printf("ABI Version: %d\n", eh.e_ident[EI_ABIVERSION]);
    printf("Type: %s\n", eh.e_type == ET_EXEC ? "Executable file" : eh.e_type == ET_DYN ? "Shared object file" : "Other");
    printf("Entry point address: %lx\n", eh.e_entry);

    close(init);
    return (0);
}
