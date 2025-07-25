//
//  AdLinkPrevLoad.h
//  AdLinkAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <WindMillSDK/WindMillSDK.h>

@interface AdLinkPrevLoad : NSObject
+(instancetype) shareInstance;
-(void) startAdPrev:(NSString *)rewardId interstitialId:(NSString *)interstitialId fullScreenId:(NSString *)fullScreenId userId:(NSString *)userId;
-(WindMillRewardVideoAd *) getPrevRewardAd;
-(WindMillIntersititialAd *) getPrevInterstitialAd;
-(WindMillIntersititialAd *) getPrevFullScreenAd;
-(NSString *) getInterstitialId;
-(NSString *) getFullScreenId;
@end
