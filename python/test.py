
from collections import Counter


def mostActive(customers):
    active = Counter(customers).most_common()
    print(active)




mostActive(['Bigcorp', 'Bigcorp', 'Acme', 'Bigcorp', 'Zork', 'Zork', 'Abc', 'Bigcorp', 'Acme', 'Bigcorp', 'Bigcorp', 'Zork', 'Bigcorp', 'Zork', 'Zork', 'Bigcorp', 'Acme', 'Bigcorp', 'Acme', 'Bigcorp', 'Acme', 'Littlecorp','Nadircorp'])