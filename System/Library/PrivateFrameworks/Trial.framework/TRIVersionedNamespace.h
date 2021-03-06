/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Trial/Trial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TRIVersionedNamespace : NSObject <NSCopying, NSSecureCoding> {

	unsigned _compatibilityVersion;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)versionedNamespaceWithName:(id)arg1 compatibilityVersion:(unsigned)arg2 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)compatibilityVersion;
-(id)initWithName:(id)arg1 compatibilityVersion:(unsigned)arg2 ;
-(BOOL)isEqualToVersionedNamespace:(id)arg1 ;
-(id)copyWithReplacementName:(id)arg1 ;
-(id)copyWithReplacementCompatibilityVersion:(unsigned)arg1 ;
@end

