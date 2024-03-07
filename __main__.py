import os

from os import system, remove
from sys import argv
from glob import glob


def main():
    boj_number = int(argv[1])

    print(f"\033[1m# 백준 {boj_number}번 문제\033[0m")
    print(f"\033[34mhttps://www.acmicpc.net/problem/{boj_number}\033[0m")

    files = search_files(boj_number)
    
    for file, ext in files:
        if ext == "cpp":
            run_cpp(file)
        elif ext == "kt":
            run_kotlin(file)
        elif ext == "py":
            run_python(file)


def search_files(number: int) -> list:
    files = []
    for path in glob(f"**/{number}.*", recursive=True):
        if os.path.isfile(path):
            ext = os.path.splitext(path)[-1][1:]
            files.append([path, ext])
    return files


def run_cpp(path: str):
    title("C++")
    system(f"g++ {path} -o tmp.out && tmp.out")
    remove("tmp.out")
        

def run_kotlin(path: str):
    title("Kotlin")
    system(f"kotlinc {path} -include-runtime -d tmp.jar && java -jar tmp.jar")
    remove("tmp.jar")


def run_python(path: str):
    title("Python")
    system(f"python -d {path}")
    

def title(text: str):
    print(f"\n\033[1m# {text}\033[0m")


if __name__ == "__main__":
    main()