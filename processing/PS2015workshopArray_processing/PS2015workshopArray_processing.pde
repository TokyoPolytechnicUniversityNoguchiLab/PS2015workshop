final int ballNum = 200;

float ballX[] = new float[ballNum];
float ballY[] = new float[ballNum];
float vx[] = new float[ballNum];
float vy[] = new float[ballNum];
float ballR[] = new float[ballNum];
color ballColor[] = new color[ballNum];

PImage ballImage;

void setup() {
  frameRate(30);
  size(1330, 896, OPENGL);
  
  smooth();
  noStroke();
  colorMode(HSB);
  ballImage = loadImage("ball_image.png");
  imageMode(CENTER); 


  for(int i = 0; i < ballNum; i++) {
    ballX[i] = random(width/2-200,width/2+200);
    ballY[i] = random(height/2-200,height/2+200);
    ballR[i] = 200;
    
    vx[i] = random(-8,8);
    vy[i] = random(-8,8);
    
    ballColor[i] = color(random(360),200,255);
  }
  
}

void draw() {
  background(0);
  blendMode(ADD);
   
  for(int i = 0; i< ballNum; i++) {  
    if(ballX[i] < 0 || ballX[i] > width) {
      vx[i] = -vx[i];
    }
    
    if(ballY[i] < 0 || ballY[i] > height) {
      vy[i] = -vy[i];
    }
    
    tint(ballColor[i]);
    ballX[i] = ballX[i] + vx[i];
    ballY[i] = ballY[i] + vy[i];
    image(ballImage,ballX[i],ballY[i],ballR[i],ballR[i]);
  }
  
}