fun main() {
    var x = readLine()!!.split(" ").map { it.toBigInteger() }
    println(x[0] / x[1])
    print(x[0] % x[1])
}