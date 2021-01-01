/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SPAccessoryPairingConfiguration : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	long long _roleId;
	NSString* _roleEmoji;

}

@property (nonatomic,copy) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long roleId;                //@synthesize roleId=_roleId - In the implementation block
@property (nonatomic,copy) NSString * roleEmoji;              //@synthesize roleEmoji=_roleEmoji - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(long long)roleId;
-(NSString *)roleEmoji;
-(void)setRoleId:(long long)arg1 ;
-(void)setRoleEmoji:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 roleId:(long long)arg2 roleEmoji:(id)arg3 ;
@end
