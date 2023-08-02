int a = n - 1, b = 1;
        int count = 0;
        while(n = a + b) {
            a--;
            b++;
            count++;
        }

        ways.push_back(count);