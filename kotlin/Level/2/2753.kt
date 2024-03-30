fun main() {
	var x = readLine()!!.toInt()

    if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0) {
        print(1)
    } else {
        print(0)
    }
}