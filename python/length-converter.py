def km(m):
    return m * 1000

def hm(m):
    return m * 100

def dam(m):
    return m * 10

def dm(m):
    return m / 10

def cm(m):
    return m / 100

def mm(m):
    return m / 1000

def length():
    print("----- LENGTH CONVERTER -----")
    print("Kita pakai satuan dasar meter (m)")
    print("Pilih konversi tujuan")
    print("1. Kilometer (km)")
    print("2. Hektometer (hm)")
    print("3. Dekameter (dam)")
    print("4. Desimeter (dm)")
    print("5. Sentimeter (cm)")
    print("6. Milimeter (mm)")

    pilihan = input("Masukkan pilihan (1/2/3/4/5/6): ")

    if pilihan in ['1', '2', '3', '4', '5', '6']:
        try:
            meter = float(input("Masukkan nilai meter (m): "))
        except:
            print("ERROR: Pilihan tidak valid!")
            return

        if pilihan == '1':
            print(f"Hasil: {meter} meter = {km(meter)}")
        elif pilihan == '2':
            print(f"Hasil: {meter} meter = {hm(meter)}")
        elif pilihan == '3':
            print(f"Hasil: {meter} meter = {dam(meter)}")
        elif pilihan == '4':
            print(f"Hasil: {meter} meter = {dm(meter)}")
        elif pilihan == '5':
            print(f"Hasil: {meter} meter = {cm(meter)}")
        elif pilihan == '6':
            print(f"Hasil: {meter} meter = {mm(meter)}")

    else:
        print("Pilihan tidak valid!")

length()