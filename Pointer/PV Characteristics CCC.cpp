// An accurate one-diode model suited to represent the current-voltage characteristics of crystalline and thin-film photovoltaic modules

#include <iostream>	// Necessary library to run .c files
#include <stdlib.h> // To read & write files
#include <time.h>	// To calculate CPU calculation time
// #include <string.h>
// #include <math.h>	// Math Functions: Floor

int dlmread(const char *FileName, float *Data[4]);

int main()
{
	// const int Max_num = 41;
	// ---------------> Execution Time

	clock_t start = clock();

	// ---------------> Execution Time

	float *Data[4];
	const char *FileName = "G1000.dat";
	int Max_num = dlmread(FileName, Data);
	if (Max_num == 1)
	{
		printf("Check the input file!\n");
		return 1;
	}
	printf("\n%f, %f, %f\n", Data[0][38], Data[0][39], Data[0][40]);
	for (int i = 0; i < Max_num; i++)
	{
		printf("%f\n", Data[0][i]);
		// printf("%f, %f, %.0f, %.0f\n", *(*(Data) + i), Data[1][i], Data[2][i], Data[3][i]);
	}
	printf("\n%f, %f, %f\n", Data[0][38], Data[0][39], Data[0][40]);
	
	// float V_Experimental[Max_num], I_Experimental[Max_num];
	// float G_Experimental[Max_num], T_Experimental[Max_num];
	// Data[0] = V_Experimental;
	// Data[1] = I_Experimental;
	// Data[2] = G_Experimental;
	// Data[3] = T_Experimental;

	// ---------------> Execution Time
	
	clock_t end = clock();
	double elapsed = (end - start) / CLOCKS_PER_SEC;
	int minute = elapsed / 60;
	if (elapsed < 60)
	{
		printf("\nTime measured: %.3f seconds.\n\a", elapsed);
	}
	else if (elapsed < 3600)
	{
		elapsed = elapsed - minute * 60;
		printf("\nTime measured: %d minutes & %.3f seconds.\n\a", minute, elapsed);
	}
	else
	{
		int hour = elapsed / 3600;
		minute = (elapsed - hour * 3600) / 60;
		elapsed = elapsed - hour * 3600 - minute * 60;
		printf("\nTime measured: %d hour(s) & %d minutes & %.3f seconds.\n\a", hour, minute, elapsed);
	}

	// ---------------> Execution Time
	return 0;
}

// Functions
int dlmread(const char *FileName, float *Data[4])
{
	FILE *Data_Experimental = fopen(FileName, "r");
	if (Data_Experimental == NULL)
	{
		return 1;
	}

	char ch;
	char line;
	int Max_num = 1;

	while ((ch = fgetc(Data_Experimental)) != EOF)
	{
		if (ch == '\n')
		{
			if (line == '\n')
			{
				Max_num--;
				break;
			}
			line = fgetc(Data_Experimental);
			Max_num++;
		}
	}
	if (line == -1)
	{
		Max_num--;
	}

	float V_Experimental[41], I_Experimental[41], G_Experimental[41], T_Experimental[41];
	Data[0] = V_Experimental;
	Data[1] = I_Experimental;
	Data[2] = G_Experimental;
	Data[3] = T_Experimental;

	fseek(Data_Experimental, 0, SEEK_SET);
	for (int i = 0; i < Max_num; i++)
	{
		fscanf(Data_Experimental, "%f, %f, %f, %f",
			   V_Experimental + i, I_Experimental + i, G_Experimental + i, T_Experimental + i);
			   printf("%lf\n", *(*(Data) + i));
	}

	fclose(Data_Experimental);
	return Max_num;
}
// void Optimization(double x_min[], double x_max[], double (*opt_f)(double[]), double opt_C[],
// 				  void (*f_coeff)(double[]), double find_Coeff[], int n_coeff, int opt_D, int NCycle)
// {
// 	// const int NCycle = 50;		 // No. of cycle (Iteration)
// 	const int opt_N = 10 * opt_D; // Swarm (Population) Size
// 	const int EB = opt_N / 2;	  // No. of employed bees
// 	const int limit = opt_N * opt_D / 2;
// 	double opt_A[EB][opt_D + 2], opt_B[opt_D + 2], Probability[EB];
// 	int i, j, k, n, iteration;
// 	int randx;
// 	int trial[EB] = {};
// 	double phi;
// 	double x[opt_D], Coefficients[EB][n_coeff], h_coeff[n_coeff];
// 	opt_C[opt_D] = -1e5;

// 	for (i = 0; i < EB; i++)
// 	{
// 		for (j = 0; j < opt_D; j++)
// 		{
// 			x[j] = x_min[j] + (double)rand() / RAND_MAX * (x_max[j] - x_min[j]);
// 		}
// 		opt_A[i][opt_D] = opt_f(x);
// 		opt_A[i][opt_D + 1] = fit(opt_A[i][opt_D]);
// 		for (j = 0; j < opt_D; j++)
// 		{
// 			opt_A[i][j] = x[j];
// 		}
// 		f_coeff(h_coeff);
// 		for (j = 0; j < n_coeff; j++)
// 		{
// 			Coefficients[i][j] = h_coeff[j];
// 		}
// 	}

// 	for (iteration = 0; iteration < NCycle; iteration++)
// 	// while (opt_C[opt_D] < -0.8)
// 	{
// 		// printf("\n iteration = %d  ", iteration);
// 		for (i = 0; i < EB; i++)
// 		{
// 			// printf("\n i = %d", i);
// 			randx = rand() % opt_D;
// 			do
// 			{
// 				j = rand() % EB;
// 			} while (i == j);
// 			for (k = 0; k < opt_D; k++)
// 			{
// 				opt_B[k] = opt_A[i][k];
// 			}
// 			do
// 			{
// 				phi = (double)rand() / RAND_MAX * 2 - 1; // a random number between [-1 1]
// 				opt_B[randx] = opt_A[i][randx] + phi * (opt_A[i][randx] - opt_A[j][randx]);
// 			} while (opt_B[randx] > x_max[randx] || opt_B[randx] < x_min[randx]);
// 			for (int j = 0; j < opt_D; j++)
// 			{
// 				x[j] = opt_B[j];
// 			}
// 			opt_B[opt_D] = opt_f(x);
// 			opt_B[opt_D + 1] = fit(opt_B[opt_D]);
// 			if (opt_B[opt_D + 1] < opt_A[i][opt_D + 1])
// 			{
// 				for (k = 0; k < opt_D + 2; k++)
// 				{
// 					opt_A[i][k] = opt_B[k];
// 				}
// 				f_coeff(h_coeff);
// 				for (int j = 0; j < n_coeff; j++)
// 				{
// 					Coefficients[i][j] = h_coeff[j];
// 				}
// 				trial[i] = 0;
// 			}
// 			else
// 			{
// 				trial[i]++;
// 			}
// 			// printf(", i2 = %d, EB = %d", i, EB);
// 		}

// 		// Onlooker bee phase
// 		// Calculate the probabilities
// 		double sum = 0.0;
// 		for (i = 0; i < EB; i++)
// 		{
// 			sum += opt_A[i][opt_D + 1];
// 		}
// 		for (i = 0; i < EB; i++)
// 		{
// 			Probability[i] = opt_A[i][opt_D + 1] / sum;
// 		}
// 		i = 0;
// 		n = 0;
// 		float r;
// 		while (n < EB)
// 		{
// 			r = (double)rand() / RAND_MAX;
// 			if (r < Probability[i])
// 			{
// 				randx = rand() % opt_D;
// 				do
// 				{
// 					j = rand() % EB;
// 				} while (i == j);
// 				for (k = 0; k < opt_D; k++)
// 				{
// 					opt_B[k] = opt_A[i][k];
// 				}
// 				do
// 				{
// 					phi = (double)rand() / RAND_MAX * 2 - 1; // a random number between [-1 1]
// 					opt_B[randx] = opt_A[i][randx] + phi * (opt_A[i][randx] - opt_A[j][randx]);
// 				} while (opt_B[randx] > x_max[randx] || opt_B[randx] < x_min[randx]);
// 				for (int j = 0; j < opt_D; j++)
// 				{
// 					x[j] = opt_B[j];
// 				}
// 				opt_B[opt_D] = opt_f(x);
// 				for (j = 0; j < opt_D; j++)
// 				{
// 					// if (x[j] != opt_B[j])
// 					// {
// 					// 	opt_B[opt_D] = -100.0;
// 					// 	break;
// 					// }
// 					opt_B[j] = x[j];
// 				}
// 				opt_B[opt_D + 1] = fit(opt_B[opt_D]);

// 				if (opt_B[opt_D + 1] < opt_A[i][opt_D + 1])
// 				{
// 					for (k = 0; k < opt_D + 2; k++)
// 					{
// 						opt_A[i][k] = opt_B[k];
// 					}
// 					f_coeff(h_coeff);
// 					for (j = 0; j < n_coeff; j++)
// 					{
// 						Coefficients[i][j] = h_coeff[j];
// 					}
// 					trial[i] = 0;
// 				}
// 				else
// 				{
// 					trial[i]++;
// 				}
// 				n++;
// 			}
// 			i++;
// 			if (i == EB)
// 			{
// 				i = 0;
// 			}
// 		}
// 		for (i = 0; i < EB; i++)
// 		{
// 			if (trial[i] > limit)
// 			{
// 				for (j = 0; j < opt_D; j++)
// 				{
// 					// opt_A[i][j] = x_min[j] + (double)rand() / RAND_MAX * (x_max[j] - x_min[j]);
// 					x[j] = x_min[j] + (double)rand() / RAND_MAX * (x_max[j] - x_min[j]);
// 				}
// 				opt_A[i][opt_D] = opt_f(x);
// 				opt_A[i][opt_D + 1] = fit(opt_A[i][opt_D]);
// 				for (j = 0; j < opt_D; j++)
// 				{
// 					opt_A[i][j] = x[j];
// 				}
// 				f_coeff(h_coeff);
// 				for (j = 0; j < n_coeff; j++)
// 				{
// 					Coefficients[i][j] = h_coeff[j];
// 				}
// 				trial[i] = 0;
// 			}
// 		}

// 		// Scout phase
// 		for (i = 1; i < EB; i++)
// 		{
// 			// for (int i = 0; i < EB; i++)
// 			// {
// 			// 	printf("\n");
// 			// 	for (int j = 0; j <= opt_D; j++)
// 			// 	{
// 			// 		printf("%.10f  ", opt_A[i][j]);
// 			// 	}
// 			// }
// 			// printf("\n");
// 			// printf("\nopt_A[i - 1][opt_D] = %f, opt_A[i][opt_D] = %f, opt_C[opt_D] = %f", opt_A[i - 1][opt_D], opt_A[i][opt_D], opt_C[opt_D]);
// 			if (opt_A[i][opt_D] >= opt_A[i - 1][opt_D] && opt_A[i][opt_D] >= opt_C[opt_D])
// 			{
// 				for (j = 0; j < opt_D; j++)
// 				{
// 					opt_C[j] = opt_A[i][j];
// 				}
// 				opt_C[opt_D] = opt_A[i][opt_D];
// 				for (j = 0; j < n_coeff; j++)
// 				{
// 					find_Coeff[j] = Coefficients[i][j];
// 				}
// 				// printf("\n");
// 				// for (int i = 0; i < n_coeff; i++)
// 				// {
// 				// 	printf("%f  ", find_Coeff[i]);
// 				// }
// 				// printf("\n");
// 			}
// 			// printf("\n i = %d, EB = %d", i, EB);
// 		}
// 		// printf("\n iter = %d", iteration);
// 	}
// 	// printf("\nended!");
// }