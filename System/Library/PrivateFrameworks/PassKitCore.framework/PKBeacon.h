/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSNumber, NSString;

@interface PKBeacon : NSObject <NSSecureCoding> {

	NSUUID* _proximityUUID;
	NSNumber* _major;
	NSNumber* _minor;
	NSString* _name;
	NSString* _relevantText;

}

@property (nonatomic,retain) NSUUID * proximityUUID;               //@synthesize proximityUUID=_proximityUUID - In the implementation block
@property (nonatomic,retain) NSNumber * major;                     //@synthesize major=_major - In the implementation block
@property (nonatomic,retain) NSNumber * minor;                     //@synthesize minor=_minor - In the implementation block
@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * relevantText;              //@synthesize relevantText=_relevantText - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)major;
-(NSNumber *)minor;
-(NSUUID *)proximityUUID;
-(void)setProximityUUID:(NSUUID *)arg1 ;
-(void)setMajor:(NSNumber *)arg1 ;
-(void)setMinor:(NSNumber *)arg1 ;
-(void)setRelevantText:(NSString *)arg1 ;
-(NSString *)relevantText;
-(void)setProximityUUIDWithString:(id)arg1 ;
-(id)proximityUUIDAsString;
@end

