#import <UIKit/UIKit.h>
#import "GADBannerView.h"

GADBannerView* bannerView;
UIView *myView;

@interface AppController : NSObject<UIAccelerometerDelegate, UIApplicationDelegate>
{
    UIViewController *_viewController;
    UIWindow*        _window;
}
@property(nonatomic,retain)UIView *selfView;

- (void) startUnity:(UIApplication*)application;
- (void) startRendering:(UIApplication*)application;

- (void) startUnity:(UIApplication*)application;
- (void) startRendering;
- (void) Repaint;
- (void) RepaintDisplayLink;
- (void) prepareRunLoop;
@end

#define NSTIMER_BASED_LOOP 0
#define THREAD_BASED_LOOP 1
#define EVENT_PUMP_BASED_LOOP 2
