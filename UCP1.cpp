#include <iostream>
using namespace std;

void input(int NAUFAL[], int n)
{
    cout << "Enter " << n << " Number :\n";
    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> NAUFAL[i];
    }
}

void selectionSort(int NAUFAL[], int n)
{
    for (int NS = 0; NS <= n - 2; NS++)
    {
        int min_index = NS;
        for (int i = NS + 1; i < n; i++)
        {
            if (NAUFAL[i] < NAUFAL[min_index])
            {
                min_index = i;
            }
        }
        int temp = NAUFAL[NS];
        NAUFAL[NS] = NAUFAL[min_index];
        NAUFAL[min_index] = temp;
    }
}

void display(int NAUFAL[], int n)
{
    cout << "Elemen Array yang telah tersusun :\n";
    for (int i = 0; i < n; i++)
    {
        cout << NAUFAL[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int MAX = 26;
    int NAUFAL[MAX];
    int n;

    cout << "Masukan banyaknya elemen array : ";
    cin >> n;
    while (n > MAX)
    {
        cout << "Hanya dapat mempunyai maksimal 26 Elemen, Silahkan Masukkan ulang : ";
        cin >> n;
    }
    input(NAUFAL, n);
    selectionSort(NAUFAL, n);
    display(NAUFAL, n);

    return 0;
}

// JAWABAN SOAL TYPE 2
//  1. Algoritma Bubble Sort adalah algoritma pengurutan yang bekerja dengan
// membandingkan dan menukar elemen-elemen secara berurutan hingga seluruh data menjadi terurut

// 2. Algoritma Shell Sort adalah algoritma pengurutan yang berdasarkan konsep peningkatan atau
// pengembangan dari algoritma Insertion Sort.

// 3. Jika sebagian data sudah terurut, algoritma Insertion Sort yang paling cocok.
// karna Insertion Sort bekerja lebih efisien saat data sudah hampir terurut.

