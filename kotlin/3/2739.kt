fun main() {
	var x = readLine()!!.toInt()

    for (i: Int in 1..9) {
        println("${x} * ${i} = ${x * i}")
    }
}