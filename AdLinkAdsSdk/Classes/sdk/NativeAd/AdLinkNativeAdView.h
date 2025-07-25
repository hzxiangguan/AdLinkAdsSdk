//
//  AdLinkNativeAdView.h
//  AdLinkAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class AdLinkNativeAdView;
@class AdLinkNativeAd;
@protocol AdLinkNativeAdViewDelegate <NSObject>
@optional
- (void)nativeExpressAdViewRenderSuccess:(AdLinkNativeAdView *)nativeExpressAdView;
- (void)nativeExpressAdViewRenderFail:(NSError *)error;
- (void)nativeAdViewWillExpose;
- (void)nativeAdViewDidClick;
- (void)dislikeWithReason:(NSString *) reason;

@end
@interface AdLinkNativeAdView : NSObject
+ (instancetype) initAdView;

@property(nonatomic) CGRect frame;
@property (nonatomic, weak) id<AdLinkNativeAdViewDelegate> delegate;
@property (nonatomic, weak) UIViewController *viewController;
- (void)refreshData:(AdLinkNativeAd *)nativeAd;
- (UIView *)getView;
@end
