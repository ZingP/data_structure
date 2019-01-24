// 最大子序列和
#include <iostream>
using namespace std;
double maxSubSeqSum1(double *array, int n);
double maxSubSeqSum2(double array[], int n);

int main()
{
    double array[13] = {10, -3, 4, 6, -5, 7, -1, 1};
    int length;
    double n1, n2;

    length = sizeof(array) / sizeof(array[0]);
    n1 = maxSubSeqSum1(array, length);
    cout << "max sub seq sum: " << n1 << ".\n";

    n2 = maxSubSeqSum2(array, length);
    cout << "max sub seq sum: " << n2 << ".\n";
    return 0;
}

//计算并返回所最大子序列的和：穷举遍历
double maxSubSeqSum1(double array[], int n)
{
	//用来存储最大子序列的和
	int maxSum = 0;

	//i标记子序列的头
	for (int i = 0; i < n; i++)
	{
		//j标记子序列的尾
		for (int j = i; j < n; j++)
		{
			//用来存储当前头尾计算的求和结果
			int thisSum = 0;

			//将子序列的值依次加入求和结果
			for (int k = i; k <= j; k++)
			{
				thisSum += array[k];
			}

			//存储两者的最大值
			if(thisSum > maxSum)
				maxSum = thisSum;
		}
	}

	return maxSum;
}

// 穷举法优化
double maxSubSeqSum2(double array[], int n) 
{
    double sum, max;
    int i, j;

    max = 0;
    for (i=0; i<n; i++) 
    {
        sum = 0;
        for (j=i; j<n; j++)
        {
            sum += array[j];
            if (sum > max) 
            {
                max = sum;
            }
        }
    }
    return max;
}
