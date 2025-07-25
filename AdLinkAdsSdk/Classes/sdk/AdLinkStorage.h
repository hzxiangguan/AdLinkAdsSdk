//
//  AdLinkStorage.h
//  AdLinkAdsSdk-iOS
//
//
#import "AdLinkDto.h"
#import <Foundation/Foundation.h>

@interface AdLinkStorage : NSObject
@property (nonatomic) int cps;
+(instancetype) shareInstance;
-(void) addStrategyDtos:(NSString *)adsId adDto:(AdLinkDto *) adLinkDto;
-(AdLinkDto *) getStrategy: (NSString *)adsId;
@end
