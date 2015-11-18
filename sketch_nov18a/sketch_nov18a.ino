void setup() 
{
   // put your setup code here, to run once:
  pinMode(4,INPUT);     //将4号数字口设置为输入状态,13号设为输出状态
  pinMode(13,OUTPUT);

}

void loop()
{
  int n  =digitalRead(4);  //创建一个变量n,将4号数字口的状态采集出来赋值给他
  if (n==HIGH)    //判断n是否为高电平,如果是执行下面的语句,不是则跳过
  {

    delay(1000);
    digitalWrite(13,HIGH);
    delay(5000);
    digitalWrite(13,LOW);
  }    
}
