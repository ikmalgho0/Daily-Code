def fahrenheit(x):
    return (x * 9/5) + 32

def kelvin(x):
    return x + 273.15

def reamur(x):
    return 4/5 * x

def temperature():
    print("===== TEMPERATURE CONVERTER =====")
    print("Pilih celcius anda ingin diubah menjadi apa:")
    print("1. Fahrenheit")
    print("2. Kelvin")
    print("3. Reamur")

    pilihan = (input("Masukkan pilihan anda (1/2/3): "))

    if pilihan in ['1', '2', '3']:
        try:
            celcius = float(input("Masukkan nilai celcius anda: "))
        except:
            print("ERROR: Pilihan tidak valid, coba lagi!")
            return

        if pilihan == '1':
            print(f"Hasil konversi {celcius} celcius ke fahrenheit: {fahrenheit(celcius)}")
        elif pilihan == '2':
            print(f"Hasil konversi {celcius} celcius ke kelvin: {kelvin(celcius)}")
        elif pilihan == '3':
            print(f"Hasil konversi {celcius} celcius ke reamur: {reamur(celcius)}")

    else:
        print("Pilihan tidak valid!")

temperature()