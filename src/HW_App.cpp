#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class HW_App : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
    
    
};

void HW_App::setup()
{
}

void HW_App::mouseDown( MouseEvent event )
{
}

void HW_App::update()
{
}

void HW_App::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( HW_App, RendererGl )
