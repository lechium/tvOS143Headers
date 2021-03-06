/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableDictionary;

@interface _CDPerfMetricFamily : NSObject {

	NSString* _name;
	NSMutableDictionary* _perfMetrics;

}

@property (readonly) NSMutableDictionary * perfMetrics;              //@synthesize perfMetrics=_perfMetrics - In the implementation block
@property (readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
+(id)perfMetricFamilyWithName:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithName:(id)arg1 ;
-(id)perfMetricWithName:(id)arg1 string:(id)arg2 ;
-(NSMutableDictionary *)perfMetrics;
-(id)perfMetricWithName:(id)arg1 ;
-(id)allPerfMetrics;
@end

