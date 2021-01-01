/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPersistentHistoryToken;

@interface PHPersistentChangeToken : NSObject <NSCopying, NSSecureCoding> {

	NSPersistentHistoryToken* _persistentHistoryToken;
	int _version;

}

@property (nonatomic,readonly) NSPersistentHistoryToken * persistentHistoryToken;              //@synthesize persistentHistoryToken=_persistentHistoryToken - In the implementation block
@property (nonatomic,readonly) int version;                                                    //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
+(int)currentVersion;
+(id)currentTokenForContext:(id)arg1 ;
+(id)tokenWithPersistentHistoryToken:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)version;
-(id)initWithPersistentHistoryToken:(id)arg1 version:(int)arg2 ;
-(id)initWithPersistentHistoryToken:(id)arg1 ;
-(BOOL)isEqualToPersistentChangeToken:(id)arg1 ;
-(NSPersistentHistoryToken *)persistentHistoryToken;
@end
