//
//  AdLinkNativeAdManager.h
//  AdLinkAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class AdLinkRequest;
@class AdLinkNativeAd;
@class AdLinkNativeAdManager;

NS_ASSUME_NONNULL_BEGIN
@protocol AdLinkNativeAdManagerDelegate <NSObject>

@optional
- (void)nativeAdsManagerSuccessToLoad:(AdLinkNativeAdManager *)nativeAdsManager;
- (void)nativeAdsManagerdidFailWithError:(NSError *)error;

@end


@interface AdLinkNativeAdManager : NSObject

@property (nonatomic, weak) id<AdLinkNativeAdManagerDelegate> delegate;

@property (nonatomic, assign, readwrite) CGSize adSize;

- (instancetype)initWithRequest:(AdLinkRequest *)request;

- (void)loadAdDataWithCount:(NSInteger)count;

- (NSArray<AdLinkNativeAd *> * _Nullable)getAllNativeAds;

@end

NS_ASSUME_NONNULL_END

