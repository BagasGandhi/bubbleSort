void display() {
    cout << endl;
    cout << "===================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j]; // menampilkan array
        if (j < n - 1) {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;

    cout << "Jumlah pass = " << n - 1 << endl; // menampilkan jumlah dari pass
    cout << endl;
    cout << endl;
}

int main() {
    input();

    bubbleSortArray();
    display();

    system("pause");
    return 0;
}
        