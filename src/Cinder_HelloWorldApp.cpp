#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class Cinder_HelloWorldApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void Cinder_HelloWorldApp::setup()
{
}

void Cinder_HelloWorldApp::mouseDown( MouseEvent event )
{
}

void Cinder_HelloWorldApp::update()
{
}

void Cinder_HelloWorldApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( Cinder_HelloWorldApp, RendererGl )
