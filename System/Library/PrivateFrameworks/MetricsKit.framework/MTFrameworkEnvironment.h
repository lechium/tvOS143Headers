/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTIDSecretStore;
@class NSString;

@interface MTFrameworkEnvironment : NSObject {

	NSString* _localDataPath;
	id<MTIDSecretStore> _secretStore;

}

@property (nonatomic,copy) NSString * localDataPath; 
+(void)initialize;
+(id)sharedEnvironment;
+(void)setSharedEnvironment:(id)arg1 ;
+(void)withEnvironment:(id)arg1 execute:(/*^block*/id)arg2 ;
-(id)date;
-(id)valueForEntitlement:(id)arg1 ;
-(BOOL)isInternalBuild;
-(id)hostProcessBundleIdentifier;
-(id)secretStore;
-(void)setLocalDataPath:(NSString *)arg1 ;
-(NSString *)localDataPath;
-(id)metricsKitBundleIdentifier;
-(BOOL)useCloudKitSandbox;
@end
