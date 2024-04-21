#include <bits/stdc++.h>

//Thanks jdeokkim
const char *DIGITS[] = {
    " * * *\n*     *\n*     *\n*     *\n\n*     *\n*     *\n*     *\n * * *\n",
    "\n      *\n      *\n      *\n\n      *\n      *\n      *\n",
    " * * *\n      *\n      *\n      *\n * * *\n*\n*\n*\n * * *\n",
    " * * *\n      *\n      *\n      *\n * * *\n      *\n      *\n      *\n * * *\n",
    "\n*     *\n*     *\n*     *\n * * *\n      *\n      *\n      *\n",
    " * * *\n*\n*\n*\n * * *\n      *\n      *\n      *\n * * *\n",
    " * * *\n*\n*\n*\n * * *\n*     *\n*     *\n*     *\n * * *\n",
    " * * *\n      *\n      *\n      *\n\n      *\n      *\n      *\n",
    " * * *\n*     *\n*     *\n*     *\n * * *\n*     *\n*     *\n*     *\n * * *\n",
    " * * *\n*     *\n*     *\n*     *\n * * *\n      *\n      *\n      *\n * * *\n"
};

int main(int argc, char *argv[])
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int num;
    std::cin >> num;

    std::cout << DIGITS[num];

	return 0;
}