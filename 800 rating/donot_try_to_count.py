def main():
    t = int(input())
    
    for _ in range(t):
        n, m = map(int, input().split())
        x = input().strip()
        s = input().strip()
        found = False
        cnt = 0
        while ((len(x)) <= 100):
            if s in x:
                found = True
                break
            x = x + x
            cnt += 1
        if (found): print(cnt)
        else: print(-1)
if __name__ == "__main__":
    main()