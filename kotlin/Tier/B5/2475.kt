fun main() {
    var num = readLine()!!.split(" ").map { it.toInt() }
    var sum = 0
    repeat (5) {
        sum += num[it] * num[it] 
    }
    print(sum % 10)
}