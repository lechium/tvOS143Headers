/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TVCKBookmarkKey, NSDate;

@interface TVCKBookmark : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	BOOL _hasBeenPlayed;
	BOOL _hasBeenRented;
	BOOL _isMarkedAsUnwatched;
	BOOL _hasFakeTimestamp;
	TVCKBookmarkKey* _key;
	double _bookmarkTime;
	NSDate* _bookmarkTimestamp;
	unsigned long long _playCount;

}

@property (assign,nonatomic) BOOL hasFakeTimestamp;                       //@synthesize hasFakeTimestamp=_hasFakeTimestamp - In the implementation block
@property (nonatomic,readonly) TVCKBookmarkKey * key;                     //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) double bookmarkTime;                       //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (nonatomic,readonly) NSDate * bookmarkTimestamp;                //@synthesize bookmarkTimestamp=_bookmarkTimestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long playCount;              //@synthesize playCount=_playCount - In the implementation block
@property (nonatomic,readonly) BOOL hasBeenPlayed;                        //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
@property (nonatomic,readonly) BOOL hasBeenRented;                        //@synthesize hasBeenRented=_hasBeenRented - In the implementation block
@property (nonatomic,readonly) BOOL isMarkedAsUnwatched;                  //@synthesize isMarkedAsUnwatched=_isMarkedAsUnwatched - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TVCKBookmarkKey *)key;
-(id)initWithKey:(id)arg1 ;
-(unsigned long long)playCount;
-(double)bookmarkTime;
-(BOOL)hasBeenPlayed;
-(NSDate *)bookmarkTimestamp;
-(BOOL)hasBeenRented;
-(BOOL)isMarkedAsUnwatched;
-(BOOL)hasFakeTimestamp;
-(id)_copyWithResultClass:(Class)arg1 ;
-(void)_setBookmarkTimeWithoutUpdatingTimestamp:(double)arg1 ;
-(void)_setBookmarkTimestamp:(id)arg1 ;
-(void)_setPlayCount:(unsigned long long)arg1 ;
-(void)_setHasBeenPlayed:(BOOL)arg1 ;
-(void)_setHasBeenRented:(BOOL)arg1 ;
-(void)_setIsMarkedAsUnwatched:(BOOL)arg1 ;
-(BOOL)hasRemoteData;
-(void)setHasFakeTimestamp:(BOOL)arg1 ;
@end

