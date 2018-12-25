fun main(args: Array<String>){
  val a = readLine()!!.split(" ").map(String::toInt)
  var i:Int= 0
  var p:Int= 0
  while(i < 3){
    if(a/100==1 || (a/10)%10==1 || a%10==1){
      p++
    }
    i++
  }
  println(p)
}
