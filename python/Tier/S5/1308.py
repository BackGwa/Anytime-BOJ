from datetime import date

by, bm, bd = map(int, input().split())
ay, am, ad = map(int, input().split())

if by + 1000 < ay:
    print("gg")
elif by + 1000 == ay and (bm, bd) <= (am, ad):
    print("gg")
else:
    bf = date(by, bm, bd)
    af = date(ay, am, ad)
    print(f"D-{af.toordinal() - bf.toordinal()}")