/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, EspressoProfilingLayerSupportInfo, NSDictionary, NSArray;

@interface EspressoProfilingLayerInfo : NSObject {

	int _selected_runtime_engine;
	NSString* _name;
	NSString* _debug_name;
	EspressoProfilingLayerSupportInfo* _main_engine_support;
	NSDictionary* _per_platform_support;
	NSArray* _runtimes;
	double _average_runtime;

}

@property (retain) NSString * name;                                                      //@synthesize name=_name - In the implementation block
@property (retain) NSString * debug_name;                                                //@synthesize debug_name=_debug_name - In the implementation block
@property (assign) int selected_runtime_engine;                                          //@synthesize selected_runtime_engine=_selected_runtime_engine - In the implementation block
@property (retain) EspressoProfilingLayerSupportInfo * main_engine_support;              //@synthesize main_engine_support=_main_engine_support - In the implementation block
@property (retain) NSDictionary * per_platform_support;                                  //@synthesize per_platform_support=_per_platform_support - In the implementation block
@property (retain) NSArray * runtimes;                                                   //@synthesize runtimes=_runtimes - In the implementation block
@property (assign) double average_runtime;                                               //@synthesize average_runtime=_average_runtime - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)debug_name;
-(void)setDebug_name:(NSString *)arg1 ;
-(int)selected_runtime_engine;
-(void)setSelected_runtime_engine:(int)arg1 ;
-(EspressoProfilingLayerSupportInfo *)main_engine_support;
-(void)setMain_engine_support:(EspressoProfilingLayerSupportInfo *)arg1 ;
-(NSDictionary *)per_platform_support;
-(void)setPer_platform_support:(NSDictionary *)arg1 ;
-(NSArray *)runtimes;
-(void)setRuntimes:(NSArray *)arg1 ;
-(double)average_runtime;
-(void)setAverage_runtime:(double)arg1 ;
@end
