address = 0xbffffa24

high = address >> 16
low = address & 0xFFFF

print(low - (8))
print((high|0x10000) - low)

#0xbffffaac
