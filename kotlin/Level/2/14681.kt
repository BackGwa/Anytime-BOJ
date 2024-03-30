fun main() {
	var x = readLine()!!.toInt()
    var y = readLine()!!.toInt()

    if      (x >= 0 && y >= 0)  print(1);
    else if (x < 0 && y >= 0)   print(2);
    else if (x < 0 && y < 0)    print(3);
    else                        print(4);
}