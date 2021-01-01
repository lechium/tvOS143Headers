/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SPHandle : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSString* _destination;

}

@property (assign,nonatomic) long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * destination;              //@synthesize destination=_destination - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)handleWithEmailAddress:(id)arg1 ;
+(id)handleWithPhoneNumber:(id)arg1 ;
+(id)handleWithString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(void)setDestination:(NSString *)arg1 ;
-(NSString *)destination;
-(id)initWithType:(long long)arg1 destination:(id)arg2 ;
@end

