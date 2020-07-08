# Uses python3
import sys

def get_change(m):
    #write your code here
    cnt=0
    if(m>=10):
        cnt = m//10
        m=m%10
    if(m>=5):
        cnt = m//5
        m=m%5
    if(m>0):
        cnt=m
    return cnt

if __name__ == '__main__':
    m = int(sys.stdin.read())
    print(get_change(m))
