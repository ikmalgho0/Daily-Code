def tambah(x, y):
    return x + y

def kurang(x, y):
    return x - y

def kali(x, y):
    return x * y

def bagi(x, y):
    if y == 0:
        return "Error: pembagian dengan 0 tidak diperbolehkan"
    return x / y

def pangkat(x, y):
    return x ** y

def kalkulator():
    print("===== SIMPLE KALKULATOR =====")
    print("Pilih operasi:")
    print("1. Penjumlahan (+)")
    print("2. Pengurangan (-)")
    print("3. Perkalian (*)")
    print("4. Pembagian (/)")
    print("5. Perpangkatan (**)")

    pilihan = input("Masukkan pilihan (1/2/3/4/5): ")

    if pilihan in ['1', '2', '3', '4', '5']:
        try:
            num1 = float(input("Masukkan angka pertama: "))
            num2 = float(input("Masukkan angka kedua: "))
        except ValueError:
            print("Error: input harus berupa angka")
            return

        if pilihan == '1':
            print(f"Hasil: {num1} + {num2} = {tambah(num1, num2)}")
        elif pilihan == '2':
            print(f"Hasil: {num1} - {num2} = {kurang(num1, num2)}")
        elif pilihan == '3':
            print(f"Hasil: {num1} * {num2} = {kali(num1, num2)}")
        elif pilihan == '4':
            print(f"Hasil: {num1} / {num2} = {bagi(num1, num2)}")
        elif pilihan == '5':
            print(f"Hasil: {num1} ** {num2} = {pangkat(num1, num2)}")

    else:
        print("Pilihan tidak valid!")

if __name__ == "__main__":
    kalkulator()