fun main() {
    var s = readLine()!!.split(" ")
    var x = 0
    for (i: String in s) {
        if (i != "") x++
    }
    print(x)
}