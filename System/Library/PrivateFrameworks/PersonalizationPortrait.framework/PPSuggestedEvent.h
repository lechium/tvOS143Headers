/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PPScoredEvent.h>

@interface PPSuggestedEvent : PPScoredEvent {

	unsigned char _category;

}

@property (nonatomic,readonly) unsigned char category;              //@synthesize category=_category - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)category;
-(id)initWithPPEvent:(id)arg1 ;
-(id)initWithPPEvent:(id)arg1 score:(double)arg2 ;
@end
