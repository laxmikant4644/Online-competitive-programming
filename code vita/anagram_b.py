def main():
    def check(w,a):
        return ''.join(sorted(list(w)))==''.join(sorted(list(a)))
        

    line=raw_input()
    line_list=line.split(' ')
    line_list[-1]=line_list[-1][:-1]
    printed=[]
    while len(line_list)>1:
        word=line_list[0].lower()
        if word in printed:
            del line_list[0]
            continue
        i=1
        print_list=[word]
        while i<len(line_list):
            lower=line_list[i].lower()
            if check(word,lower):
                if lower not in print_list:
                    print_list.append(lower);
                del line_list[i]
            else:
                i+=1
        if len(print_list)>1:
            print ' '.join(print_list)
            for item in print_list:
                printed.append(item)
        else:
            del line_list[0]
main()
