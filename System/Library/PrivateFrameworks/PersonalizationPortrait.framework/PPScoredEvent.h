/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface PPScoredEvent : NSObject <NSSecureCoding> {

	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _title;
	double _score;

}

@property (nonatomic,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) double score;                    //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)score;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 title:(id)arg3 score:(double)arg4 ;
@end

