/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AMSMappedBundleInfo, AMSProcessInfo, NSString;

@interface AMSUserAgent : NSObject {

	AMSMappedBundleInfo* _bundleInfo;
	AMSProcessInfo* _processInfo;

}

@property (nonatomic,readonly) AMSMappedBundleInfo * bundleInfo;              //@synthesize bundleInfo=_bundleInfo - In the implementation block
@property (nonatomic,readonly) AMSProcessInfo * processInfo;                  //@synthesize processInfo=_processInfo - In the implementation block
@property (nonatomic,retain) NSString * clientName; 
@property (nonatomic,retain) NSString * clientVersion; 
+(id)userAgentForProcessInfo:(id)arg1 ;
+(id)_sharedCache;
+(id)cachedUserAgentForBundleIdentifier:(id)arg1 ;
+(void)cacheUserAgent:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(AMSProcessInfo *)processInfo;
-(NSString *)clientName;
-(void)setClientName:(NSString *)arg1 ;
-(id)initWithProcessInfo:(id)arg1 ;
-(NSString *)clientVersion;
-(void)setClientVersion:(NSString *)arg1 ;
-(id)compile;
-(id)_userAgentSuffix;
-(AMSMappedBundleInfo *)bundleInfo;
-(id)_compileAndShouldCache:(BOOL*)arg1 ;
-(id)_sharedComponentFairPlayDeviceType;
-(id)_iOSComponentClientInfo;
-(id)_iOSComponentProductVersion;
-(id)_iOSComponentDeviceModel;
-(id)_iOSComponentHardwarePlatform;
-(id)_iOSComponentBuildVersion;
-(id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)arg1 ;
-(id)_sharedComponentFrameworkVersion;
-(id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)arg1 productType:(id)arg2 ;
@end

