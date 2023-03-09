#include "so_long.h"

void	open_mlx(void)
{
	void	*mlx;
	void	*mlx_win;
	void	*img;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 800, 600, "so_long!");
	mlx_loop(mlx);
	img = mlx_new_image(mlx, 800, 600);
}

