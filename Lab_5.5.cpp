#include <iostream>
using namespace std;

// ������� ��� ���������� n-�� ����� ����������� �������
int nthTerm(int a1, int d, int n) {
    if (n == 1)
        return a1; // ������� �������: ������ ����
    return nthTerm(a1, d, n - 1) + d; // ���������� ������������
}

// ������� ��� ���������� ���� ������ n ����� ����������� �������
int sumAP(int a1, int d, int n) {
    if (n == 1)
        return a1; // ������� �������: ���� ������ ����� � �� ��� ����
    return sumAP(a1, d, n - 1) + nthTerm(a1, d, n); // ���������� ������������
}

// ������� ��� ���������� ������� ������
int recursionDepth(int n) {
    if (n == 1)
        return 1; // ������� �������
    return recursionDepth(n - 1) + 1; // ���������� ������������ ��� �������
}

int main() {
    int a1, d, n;

    cout << "������ ������ ���� ����������� ������� (a1): ";
    cin >> a1;
    cout << "������ ������ ����������� ������� (d): ";
    cin >> d;
    cout << "������ ����� ����� ������� (n): ";
    cin >> n;

    // ���������� n-�� ����� �������
    int nth = nthTerm(a1, d, n);
    cout << n << "-� ���� ����������� �������: " << nth << endl;

    // ���������� ���� ������ n ����� �������
    int sum = sumAP(a1, d, n);
    cout << "���� ������ " << n << " ����� ����������� �������: " << sum << endl;

    // ���������� ������� ������
    int depth = recursionDepth(n);
    cout << "������� ������: " << depth << endl;

    return 0;
}