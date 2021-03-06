/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface PPContactNameRecordChangeResult : NSObject <NSSecureCoding, NSCopying> {

	BOOL _changesTruncated;
	NSArray* _changes;

}

@property (nonatomic,readonly) NSArray * changes;                  //@synthesize changes=_changes - In the implementation block
@property (nonatomic,readonly) BOOL changesTruncated;              //@synthesize changesTruncated=_changesTruncated - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contactNameRecordChangeResultWithChanges:(id)arg1 changesTruncated:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)changes;
-(BOOL)changesTruncated;
-(id)initWithChanges:(id)arg1 changesTruncated:(BOOL)arg2 ;
-(BOOL)isEqualToContactNameRecordChangeResult:(id)arg1 ;
@end

