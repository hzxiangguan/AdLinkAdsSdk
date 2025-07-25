#
# Be sure to run `pod lib lint AdLinkAdsSdk.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'AdLinkAdsSdk'
  s.version          = '2.1.0'
  s.summary          = 'adlink iOS sdk'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/hzxiangguan/AdLinkAdsSdk'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'xiangguan_opens@163.com' => 'xiangguan_opens@163.com' }
  s.source           = { :git => 'https://github.com/hzxiangguan/AdLinkAdsSdk', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '11.0'

  s.source_files = 'AdLinkAdsSdk/Classes/**/*'
  s.public_header_files = ['AdLinkAdsSdk/Classes/**/AdLinkAdsSDK.h', 'AdLinkAdsSdk/Classes/**/AdLinkRequest.h', 'AdLinkAdsSdk/Classes/**/AdLinkSplash.h', 'AdLinkAdsSdk/Classes/**/AdLinkInterstitial.h', 'AdLinkAdsSdk/Classes/**/AdLinkReward.h', 'AdLinkAdsSdk/Classes/**/AdLinkAdSdk.h', 'AdLinkAdsSdk/Classes/**/AdLinkBanner.h', 'AdLinkAdsSdk/Classes/**/AdLinkNativeAdView.h', 'AdLinkAdsSdk/Classes/**/AdLinkNativeAd.h', 'AdLinkAdsSdk/Classes/**/AdLinkNativeAdManager.h']
  s.vendored_libraries = 'AdLinkAdsSdk/Libraries/libAdLinkAdsSdk-iOS.a'
  
   s.frameworks = "Foundation","UIKit","MobileCoreServices","CoreGraphics","Security","SystemConfiguration","CoreTelephony","AdSupport","CoreData","StoreKit","AVFoundation","MediaPlayer","CoreMedia","WebKit","Accelerate","CoreLocation","AVKit","MessageUI","QuickLook","AudioToolBox","JavaScriptCore","CoreMotion","Photos"
  s.libraries = "z","resolv.9","sqlite3","c++","c++abi"
  s.dependency 'ToBid-iOS/GDTAdapter','4.5.31'
  s.dependency 'ToBid-iOS/BaiduAdapter','4.5.31'
  s.dependency 'ToBid-iOS/KSAdapter','4.5.31'
  s.dependency 'ToBid-iOS/TouTiaoAdapter','4.5.31'
  s.dependency 'ToBid-iOS/CSJMediationAdapter','4.5.31'
  s.static_framework = true
  
end
