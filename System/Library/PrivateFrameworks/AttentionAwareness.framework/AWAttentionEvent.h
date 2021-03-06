/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AWAttentionEvent : NSObject <NSSecureCoding> {

	unsigned long long _tagIndex;
	unsigned long long _eventMask;
	double _timestamp;
	id _tag;

}

@property (nonatomic,readonly) unsigned long long eventMask;              //@synthesize eventMask=_eventMask - In the implementation block
@property (nonatomic,readonly) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) id tag;                                    //@synthesize tag=_tag - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(id)tag;
-(unsigned long long)eventMask;
-(unsigned long long)tagIndex;
-(void)validateMask;
-(id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 eventMask:(unsigned long long)arg3 ;
-(void)updateWithConfig:(id)arg1 ;
@end

