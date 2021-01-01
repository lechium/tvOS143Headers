/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreTime.framework/CoreTime
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TMTimeZone : NSObject {

	NSString* _source;
	NSString* _olsonName;

}

@property (copy) NSString * source;                 //@synthesize source=_source - In the implementation block
@property (copy) NSString * olsonName;              //@synthesize olsonName=_olsonName - In the implementation block
+(id)timeZoneWithOlsonName:(id)arg1 fromSource:(id)arg2 ;
-(id)description;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(void)setOlsonName:(NSString *)arg1 ;
-(id)initWithOlsonName:(id)arg1 fromSource:(id)arg2 ;
-(NSString *)olsonName;
-(BOOL)hasSameOlsonNameAs:(id)arg1 ;
@end

