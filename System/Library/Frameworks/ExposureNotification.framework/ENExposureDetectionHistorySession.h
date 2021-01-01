/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUXPCCodable.h>

@class NSString, NSDate, ENRegion, NSUUID;

@interface ENExposureDetectionHistorySession : NSObject <CUXPCCodable> {

	NSString* _appBundleIdentifier;
	NSDate* _date;
	NSString* _exposureClassificationIdentifier;
	unsigned long long _fileCount;
	unsigned long long _matchCount;
	ENRegion* _region;
	NSString* _systemBuildVersion;
	NSUUID* _UUID;

}

@property (nonatomic,copy) NSString * appBundleIdentifier;                           //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * systemBuildVersion;                            //@synthesize systemBuildVersion=_systemBuildVersion - In the implementation block
@property (nonatomic,copy) ENRegion * region;                                        //@synthesize region=_region - In the implementation block
@property (nonatomic,copy) NSDate * date;                                            //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * exposureClassificationIdentifier;              //@synthesize exposureClassificationIdentifier=_exposureClassificationIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long fileCount;                           //@synthesize fileCount=_fileCount - In the implementation block
@property (assign,nonatomic) unsigned long long matchCount;                          //@synthesize matchCount=_matchCount - In the implementation block
@property (nonatomic,copy) NSUUID * UUID;                                            //@synthesize UUID=_UUID - In the implementation block
-(id)description;
-(id)init;
-(NSDate *)date;
-(NSUUID *)UUID;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(NSString *)appBundleIdentifier;
-(ENRegion *)region;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(void)setRegion:(ENRegion *)arg1 ;
-(NSString *)systemBuildVersion;
-(unsigned long long)matchCount;
-(void)setSystemBuildVersion:(NSString *)arg1 ;
-(void)setMatchCount:(unsigned long long)arg1 ;
-(NSString *)exposureClassificationIdentifier;
-(void)setExposureClassificationIdentifier:(NSString *)arg1 ;
-(unsigned long long)fileCount;
-(void)setFileCount:(unsigned long long)arg1 ;
@end

