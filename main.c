#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		i;
	int		ret;

	i = 0;
	(void)argc;
	fd = open((argv[1]), O_RDONLY);
	while (i < 50)
	{
		line = (char *)malloc(sizeof(*line) * 1);
		ret = get_next_line(fd, &line);
		printf("|%s|\n", line);
		i++;
	}
}
