fun main() {
    var s = readLine()!!

    for (i: Int in 97..122) {
        print("${s.indexOf(i.toChar())} ")
    }
}