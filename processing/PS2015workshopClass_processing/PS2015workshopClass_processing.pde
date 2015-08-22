PImage ballImage;

class Ball
{
  float ballX;
  float ballY;
  float vx;
  float vy;
  float ballR;
 
  color Color;
  
  Ball()
  {
    ballR = random(200,400); //radius
    
    ballX = random(200,1130); //Xpos
    ballY = random(200,696); //Ypos
    
    vx = random(-8,8); //velocity,speedX
    vy = random(-8,8); //velocity,speedy
    
    colorMode(HSB);
    Color = color(random(360),200,255);
  }
  
  void draw()
  {
    imageMode(CENTER); 
    noTint();
    tint(Color);
    image(ballImage,ballX,ballY,ballR,ballR);
    
    ballX = ballX + vx;
    ballY = ballY + vy;
    
    if(( ballX < 0) || (1330 < ballX)){ vx = -vx; }
    if(( ballY < 0) || (896 < ballY)){ vy = -vy; }
  }
}

Ball[] ballArray = new Ball[200];

void setup()
{
  frameRate(30);
  size(1330,896,OPENGL);
  
  smooth();
  noStroke();
  
  ballImage = loadImage("ball_image.png");
  for(int i = 0; i < 200; i++){ ballArray[i] = new Ball(); }
}

void draw()
{
  background(0);
  blendMode(ADD);
  for(int i = 0; i < 200; i++){ ballArray[i].draw(); }

}