#include <cstdio>
#include <fstream>
#include <string>

using namespace std;

// A+B
int task_142()
{
    ifstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");

    int A;
    int B;

    fin >> A >> B;
    fout << A + B;

	return 0;
}


// Неглухой телефон
int task_143()
{

    fstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");

    string x;
    int n;

    getline(fin, x);

    fin >> n;

    fout << x << endl;

    return 0;
}


// Бисер
int task_144()
{
    ifstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");

    long long N;
    fin >> N;
    fout << N + 1 << endl;

    return 0;
}

// Эния
int task_145()
{
    fstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");
    int N;
    int A;
    int B;
    fin >> N >> A >> B;

    int result = N * 2 * A * B;

    fout << result << endl;

    return 0;
}

// Следующее и предыдущее
int task_152()
{
    fstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");
    int x;
    fin >> x;

    fout << "The next number for the number " << x << " is " << x + 1 << endl;
    fout << "The previous number for the number " << x << " is " << x - 1;
    return 0;
}

// Два бандита
int task_146()
{
    fstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");
    int g;
    int l;
    fin >> g >> l;

    int total = g + l - 1;

    // Непростреленные у Гарри:
    int not_shot_g = total - g;
    // Непростреленные у Ларри:
    int not_shot_l = total - l;

    fout << not_shot_g << " " << not_shot_l << endl;

    return 0;
}

// Hello world!
int task_2493()
{
    ofstream fout("OUTPUT.TXT");

    fout << "Hello world!";

    return 0;
}

//Игра
int task_2495()
{
    fstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");
    int M, T;
    fin >> M >> T;
    bool canPlace = (T >= M && M > 0);
    bool ivanWins = (T >= 3 * M);

    fout << ((canPlace && ivanWins && fout << "Ivan\n") || (fout << "Denis\n"));
    return 0;
}

// Сокращение перемен
int task_2496()
{
    fstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");

    int K;
    fin >> K;
    fout << (K - 1) * 5 << std::endl;

    return 0;
}

// A+B+C
int task_2497()
{
    fstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");

    long long A;
    long long B;
    long long C;

    fin >> A >> B >> C;
    long long sum = A + B + C;
    fout << sum << endl;

    return 0;
}

// Всё могут короли
int task_2498()
{
    fstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");

    long long N;
    fin >> N;

    long long result = ((N + 1) / 2) * ((N + 1) / 2);

    fout << result << endl;
    return 0;
}

// Том и Джерри
int task_2499()
{
    fstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");
    long long N, M;
    fin >> N >> M;

    long long res = N + M - 1;
    fout << res << endl;

    return 0;
}

// Строки в книге
int task_2500()
{
    fstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");
    int K;
    int N;
    fin >> K >> N;

    int page = (N - 1) / K + 1;
    int line_on_page = (N - 1) % K + 1;

    fout << page << " " << line_on_page << endl;
    return 0;
}


// Пятью пять - двадцать пять!
int task_147()
{
    fstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");
    int A;
    fin >> A;
    int base = A / 10;
    int base_plus_one = base + 1;

    int product = base * base_plus_one;

    int result = product * 100 + 25;

    fout << result << endl;
    return 0;
}

// Последняя цифра
int task_153()
{
    fstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");
    int num;
    fin >> num;

    int last_digit = num % 10;

    fout << last_digit << endl;
    return 0;
}

// Число десятков
int task_154()
{
    fstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");
    int num;
    fin >> num;

    int t = (num / 10) % 10;

    fout << t << endl;
    return 0;
}

// Сумма цифр числа
int task_155()
{
    fstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");
    int num;
    fin >> num;

    int a = num / 100;          // сотни
    int b = (num / 10) % 10;    // десятки
    int c = num % 10;           // единицы

    int sum = a + b + c;

    fout << sum << "\n";
    return 0;
}

// Перевязь
int task_151()
{
    fstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");
    long long N;
    fin >> N;

    long long price = (N + 9) / 10;

    fout << price << endl;
    return 0;
}

// Проверьте делимость
int task_156()
{
    fstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");
    int a;
    int b;
    fin >> a >> b;

    fout << 1 + !((a % b == 0) || (b % a == 0)) << endl;
    return 0;
}

// Дележ яблок
int task_158()
{
    fstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");
    long long N;
    long long K;
    fin >> N >> K;

    long long apples_per_student = K / N;
    long long lefts = K % N;

    fout << apples_per_student << " " << lefts << " " << lefts << endl;

    return 0;
}

// МКАД
int task_157()
{
    fstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");
    int V;
    int T;
    fin >> V >> T;
    int length = 109;

    int pos = (V * T) % length;

    pos = (pos + length) % length;
    pos += 1;

    fout << pos << "\n";
    return 0;
}

// Остаток от деления
int task_1436()
{
    fstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");
    long long a;
    long long b;
    fin >> a >> b;

    long long abs_b = b;
    bool b_neg = b < 0;
    abs_b = abs_b * (1 - 2 * b_neg);

    long long r = a % b;

    bool r_neg = r < 0;
    long long cond = 1 - r_neg;

    r = r * cond + (r + abs_b) * (1 - cond);

    fout << r << endl;
    return 0;
}
