
print("3 + 5.." + (3 + 5) + "\n");

for(i = 0; i<5; i = i+1) {
    j = i + 1;
    m = i % 2;
    if (m == 0) {
        print("current num: " + i + "\n");
    } else {
        print("renxintao ===>>>" + i + "\n");
    }
}

m = 0;

while (true) {
    m = m + 1;
    if (m > 6) {
        break;
    }

    if (m == 3) {
        continue;
    }
    print("" + m + "\n");
}

hello();


function hello() {
    print("hello world 1\n");
    print("hello world 2\n");
    print("hello world 3\n");
}