/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SSMetricsEvent : NSObject {

	BOOL _shouldSuppressUserInfo;
	BOOL _shouldSuppressDSIDHeader;
	NSString* _eventType;

}

@property (nonatomic,retain,readonly) NSString * eventType;                //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuppressUserInfo;                //@synthesize shouldSuppressUserInfo=_shouldSuppressUserInfo - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuppressDSIDHeader;              //@synthesize shouldSuppressDSIDHeader=_shouldSuppressDSIDHeader - In the implementation block
+(id)_globalCanaryLock;
+(id)globalEventCanary;
+(void)setGlobalEventCanary:(id)arg1 ;
-(NSString *)eventType;
-(BOOL)isFieldBlacklistEnabled;
-(BOOL)shouldSuppressUserInfo;
-(BOOL)isBlacklistedByConfiguration:(id)arg1 ;
-(id)allTableEntityPropertiesPermittedByConfiguration:(id)arg1 externalValues:(id)arg2 ;
-(id)decorateReportingURL:(id)arg1 ;
-(BOOL)requiresDiagnosticSendingPermission;
-(double)timeIntervalFromMilliseconds:(id)arg1 ;
-(id)millisecondsFromTimeInterval:(double)arg1 ;
-(id)_dictionaryRepresentationOfBody;
-(void)appendPropertiesToBody:(id)arg1 ;
-(id)allTableEntityPropertiesPermittedByConfiguration:(id)arg1 ;
-(BOOL)shouldSuppressDSIDHeader;
@end

