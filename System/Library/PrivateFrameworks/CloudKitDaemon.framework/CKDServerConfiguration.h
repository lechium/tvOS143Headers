/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CKPropertyCoding.h>

@class NSDate, NSMutableDictionary, NSString;

@interface CKDServerConfiguration : NSObject <CKPropertyCoding> {

	NSDate* _expiry;
	NSMutableDictionary* _values;
	NSMutableDictionary* _allowedAppVersionsCache;

}

@property (nonatomic,retain) NSMutableDictionary * values;                               //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allowedAppVersionsCache;              //@synthesize allowedAppVersionsCache=_allowedAppVersionsCache - In the implementation block
@property (nonatomic,retain) NSDate * expiry;                                            //@synthesize expiry=_expiry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSMutableDictionary *)values;
-(void)setValues:(NSMutableDictionary *)arg1 ;
-(BOOL)isExpired;
-(NSDate *)expiry;
-(id)dictionaryPropertyEncoding;
-(id)initWithPropertyDictionary:(id)arg1 ;
-(id)initWithValues:(id)arg1 ;
-(id)flowControlBudget:(id)arg1 ;
-(id)flowControlRegeneration:(id)arg1 ;
-(id)flowControlMaximumThrottleTime:(id)arg1 ;
-(double)publicIdentitiesExpirationTimeout:(id)arg1 ;
-(BOOL)applicationWithBundleID:(id)arg1 canSyncUsingVersion:(id)arg2 forContainerID:(id)arg3 ;
-(unsigned long long)maxBatchSize:(id)arg1 ;
-(BOOL)allowExpiredDNSBehavior:(id)arg1 ;
-(unsigned long long)c2AllOperationMetricsReportFrequency:(id)arg1 ;
-(unsigned long long)c2AllOperationMetricsReportFrequencyBase:(id)arg1 ;
-(unsigned long long)c2AllOperationGroupMetricsReportFrequency:(id)arg1 ;
-(unsigned long long)c2AllOperationGroupMetricsReportFrequencyBase:(id)arg1 ;
-(unsigned long long)c2NetworkMetricsReportFrequency:(id)arg1 ;
-(unsigned long long)c2NetworkMetricsReportFrequencyBase:(id)arg1 ;
-(unsigned long long)c2ClientOperationMetricsReportFrequency:(id)arg1 ;
-(unsigned long long)c2ClientOperationMetricsReportFrequencyBase:(id)arg1 ;
-(unsigned long long)c2ClientApplicationMetricsReportFrequency:(id)arg1 ;
-(unsigned long long)c2ClientApplicationMetricsReportFrequencyBase:(id)arg1 ;
-(long long)tokenRegisterDays:(id)arg1 ;
-(id)transcodeServerPublicKeyURLs:(id)arg1 ;
-(id)chunkProfileConfigurationVersion:(id)arg1 ;
-(id)chunkProfileConfigurationFileExtensionToProfileMap:(id)arg1 ;
-(id)chunkProfileConfigurationDefaultProfilePolicy:(id)arg1 ;
-(id)iCloudHostnames;
-(void)setExpiry:(NSDate *)arg1 ;
-(id)valuesForContainerID:(id)arg1 ;
-(NSMutableDictionary *)allowedAppVersionsCache;
-(void)setAllowedAppVersionsCache:(NSMutableDictionary *)arg1 ;
-(id)valueForKeyPath:(id)arg1 forContainerID:(id)arg2 ;
@end

