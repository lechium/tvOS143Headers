/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FMCore/FMCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FMWeakWrapper : NSObject <NSCopying> {

	id _object;
	unsigned long long _objectHash;

}

@property (assign,nonatomic,__weak) id object;                           //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) unsigned long long objectHash;              //@synthesize objectHash=_objectHash - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)setObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)object;
-(unsigned long long)objectHash;
-(void)setObjectHash:(unsigned long long)arg1 ;
@end

