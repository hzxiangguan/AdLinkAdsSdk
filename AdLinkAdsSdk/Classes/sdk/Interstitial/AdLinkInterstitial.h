//
//  AdLinkInterstitial.h
//  AdLinkAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class AdLinkRequest;
@protocol AdLinkInterstitialAdDelegate <NSObject>
@optional
-(void) onInterstitialLoadSuccess:(NSString *) pid;
-(void) onInterstitialLoadError:(NSString *) pid error:(NSError *)error;
-(void) onInterstitialPlayStart;
-(void) onInterstitialPlayEnd;
-(void) onInterstitialClicked;
-(void) onInterstitialClosed;
-(void) onInterstitialSkiped;

@end

@interface AdLinkInterstitial : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<AdLinkInterstitialAdDelegate> delegate;

- (instancetype)initWithRequest:(AdLinkRequest *)request;
- (BOOL)isReady;
- (void)loadInterstitialAd;
- (void)show:(UIViewController *)rootViewController;
@end

