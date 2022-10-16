# include "../inc/cub3d.h"

void	set_textures(t_data *data)
{
	int x;
	int y;
	int		i;
	int k;

	k = -1;
	while ((++k < 4))
	{
		data->img.img_texturing_xpm[k] = mlx_xpm_file_to_image(data->mlx, data->img.dir_names[k], &x, &y);
		data->img.texture_addr[k] = mlx_get_data_addr(data->img.img_texturing_xpm[k], &x, &y, &i);
	}
}