#include <stdio.h>
#include <string.h>

/* Define a generic function pointer type */
typedef void(*FunctionPointerType) (void);

/* Define command structure as a pair consisting of name and command to execute */
struct CommandStruct {
	const char* name;
	FunctionPointerType execute;
};

/* command version callback function */
void cmd_version(void)
{
	printf("Version: 1.0.0\r\n");
}

/* command flash test callaback function */
void cmd_flash_test(void)
{
	printf("Executing flash test!\r\n");
	/* Do something */
}

/* Define the Client: Initialize an array of commands */
const struct CommandStruct commands[] = {
	/* These are examples */
	{"ver", cmd_version},
	{"flash", cmd_flash_test}
};

int main(int argc, char* argv[])
{
	char input[50];

	while (1) {
		printf("Enter a command to execute (or 'exit' to quit):\r\n");
		scanf("%s", input);

		if (strcmp(input, "exit") == 0) {
			printf("Exiting program!\r\n");
			break;
		}

		/* Check if entered command is in command array */
		for (size_t i = 0; i < sizeof(commands)/sizeof(commands[0]); i++) {
			if (strcmp(input, commands[i].name) == 0) {
				printf("Executing command...\r\n");
				commands[i].execute();
			}
		}
	}

	return 0;
}

