//
//  AdLinkReward.h
//  AdLinkAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class AdLinkRequest;
@protocol AdLinkRewardAdDelegate <NSObject>

@required

-(void) onGetRewarded:(NSString *_Nonnull) transId;

@optional
-(void) onRewardLoadSuccess:(NSString *) pid;
-(void) onRewardLoadError:(NSString *) pid error:(NSError *)error;
-(void) onRewardPlayStart;
-(void) onRewardPlayEnd;
-(void) onRewardClicked;
-(void) onRewardClosed;
-(void) onRewardSkiped;
-(void) onRewardPlayError:(NSString *) pid error:(NSError *)error;

@end

@interface AdLinkReward : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<AdLinkRewardAdDelegate> delegate;

- (instancetype)initWithRequest:(AdLinkRequest *)request;
- (BOOL)isReady;
- (void)loadRewardAd;
- (void)show:(UIViewController *)rootViewController options:(NSDictionary<NSString *, NSString *> * _Nullable)options;
@end
