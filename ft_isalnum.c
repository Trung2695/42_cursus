int	ft_isalnum(char c)
{
	if ('a' <= c && c <= 'z') ||  ('0' <= c && c <= '9') || ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
