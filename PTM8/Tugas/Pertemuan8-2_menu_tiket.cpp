#include <iostream>
using namespace std;

const int MAX = 3;
string queue[MAX];
int front = -1, rear = -1;

bool isFull() {
    return rear == MAX - 1;
}

bool isEmpty() {
    return front == -1 || front > rear;
}

void enqueue(string data) {
    if (isFull()) {
        cout << "Queue penuh.\n";
    } else {
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }
        queue[rear] = data;
        cout << "Data '" << data << "' berhasil ditambahkan.\n";
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "Data '" << queue[front] << "' dikeluarkan dari queue.\n";
        front++;
    }
}

void tampilkan() {
    if (isEmpty()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "Isi queue:\n";
        for (int i = front; i <= rear; i++) {
            cout << i - front + 1 << ". " << queue[i] << endl;
        }
    }
}

int main() {
    int pilihan;
    string data;

    do {
        cout << "\n=== MENU QUEUE (MAKS 3 ELEMEN) ===\n";
        cout << "1. Enqueue (Tambah)\n";
        cout << "2. Dequeue (Hapus)\n";
        cout << "3. Tampilkan Queue\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan data: ";
                cin >> data;
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                tampilkan();
                break;
            case 4:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 4);

    return 0;
}

