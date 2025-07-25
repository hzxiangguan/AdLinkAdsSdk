//
//  AdLinkNativeAd.h
//  AdLinkAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <WindMillSDK/WindMillSDK.h>

@interface AdLinkNativeAd : NSObject
- (instancetype)initWithAd:(WindMillNativeAd *) ad;
- (WindMillNativeAd *)getAd;
@end
