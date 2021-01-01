/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKRecordZoneID;

@interface CKUploadRequestConfiguration : NSObject <NSSecureCoding, NSCopying> {

	NSString* _containerIdentifier;
	NSString* _applicationBundleIdentifierOverride;
	CKRecordZoneID* _repairZoneID;

}

@property (nonatomic,copy) NSString * containerIdentifier;                              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverride;              //@synthesize applicationBundleIdentifierOverride=_applicationBundleIdentifierOverride - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * repairZoneID;                               //@synthesize repairZoneID=_repairZoneID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)resolvedConfigurationWithBaseContainer:(id)arg1 overrides:(id)arg2 ;
+(id)configurationFromBaseContainer:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(CKRecordZoneID *)repairZoneID;
-(NSString *)applicationBundleIdentifierOverride;
-(void)setApplicationBundleIdentifierOverride:(NSString *)arg1 ;
-(void)setRepairZoneID:(CKRecordZoneID *)arg1 ;
-(id)initFromBaseContainer:(id)arg1 ;
@end

