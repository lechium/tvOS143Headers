/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface DSDateFormatter : NSObject {

	NSMutableDictionary* _dateFormatters;

}

@property (nonatomic,retain) NSMutableDictionary * dateFormatters;              //@synthesize dateFormatters=_dateFormatters - In the implementation block
+(id)sharedFormatter;
-(id)init;
-(NSMutableDictionary *)dateFormatters;
-(id)formatterWithType:(long long)arg1 ;
-(void)setDateFormatters:(NSMutableDictionary *)arg1 ;
@end

