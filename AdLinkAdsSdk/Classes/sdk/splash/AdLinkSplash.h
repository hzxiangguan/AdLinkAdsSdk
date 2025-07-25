//
//  AdLinkSplash.h
//  AdLinkAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class AdLinkRequest;
@protocol AdLinkSplashAdDelegate <NSObject>
@optional
-(void) onSplashShow;
-(void) onSplashFailToShow:(NSString *) pid error:(NSError *)error;
-(void) onSplashLoadSuccess:(NSString *) pid;
-(void) onSplashLoadError:(NSString *) pid error:(NSError *)error;
-(void) onSplashClicked;
-(void) onSplashClosed;
-(void) onSplashSkiped;

@end

@interface AdLinkSplash : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<AdLinkSplashAdDelegate> delegate;
@property (nonatomic, weak) UIViewController *rootViewController;

- (instancetype)initWithRequest:(AdLinkRequest *)request
                              extra:(NSDictionary * _Nullable)extra;
- (instancetype)initWithRequest:(AdLinkRequest *)request;
- (BOOL)isReady;
-(void)loadAdAndShow;
- (void)loadAd;
- (void)showAd:(UIWindow *)window;
@end
