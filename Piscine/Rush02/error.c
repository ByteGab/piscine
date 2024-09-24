#include <unistd.h>

int	ft_printerror(void)
{
	write (1, "Error\n", 6);
}

int	ft_strlen(char *str)
{
	int	strlen;

	strlen = 0;
	while (*str != '\0')
	{
		strlen++;
		str++;
	{
	return (strlen);
}

int	ft_checknum(char *argv)
{
	char	*num;
	int	i;

	*num = argv;
	i = 0;

	while (num[i])
	{
		if (num[1] < '0' || num[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);


}
