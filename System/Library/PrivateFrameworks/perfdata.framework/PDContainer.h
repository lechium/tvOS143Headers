/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:22:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/perfdata.framework/perfdata
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary, NSMutableDictionary;

@interface PDContainer : NSObject {

	BOOL _largerBetter;
	NSString* _name;
	unsigned long long _version;
	NSDictionary* _configuration;
	NSMutableDictionary* _extensions;
	NSString* _testDescription;
	NSString* _notes;
	NSString* _primaryMetricFilter;
	NSString* _generator;
	NSDictionary* _variables;
	NSDictionary* _labels;
	NSMutableDictionary* _perfdata;

}

@property (nonatomic,retain) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSDictionary * configuration;                       //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * extensions;                   //@synthesize extensions=_extensions - In the implementation block
@property (nonatomic,retain) NSString * testDescription;                         //@synthesize testDescription=_testDescription - In the implementation block
@property (nonatomic,retain) NSString * notes;                                   //@synthesize notes=_notes - In the implementation block
@property (nonatomic,retain) NSString * generator;                               //@synthesize generator=_generator - In the implementation block
@property (nonatomic,retain) NSString * primaryMetricFilter;                     //@synthesize primaryMetricFilter=_primaryMetricFilter - In the implementation block
@property (assign,nonatomic) BOOL largerBetter;                                  //@synthesize largerBetter=_largerBetter - In the implementation block
@property (nonatomic,retain) NSDictionary * variables;                           //@synthesize variables=_variables - In the implementation block
@property (nonatomic,retain) NSDictionary * labels;                              //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * perfdata;                     //@synthesize perfdata=_perfdata - In the implementation block
@property (nonatomic,readonly) unsigned long long measurementCount; 
+(id)containerWithPath:(id)arg1 error:(id*)arg2 ;
+(id)containerWithFileURL:(id)arg1 error:(id*)arg2 ;
+(id)containerWithJSONData:(id)arg1 error:(id*)arg2 ;
+(id)containerWithJSONDictionary:(id)arg1 error:(id*)arg2 ;
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSDictionary *)configuration;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(NSString *)generator;
-(NSDictionary *)labels;
-(void)setLabels:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)extensions;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(void)setGenerator:(NSString *)arg1 ;
-(NSDictionary *)variables;
-(void)setExtensions:(NSMutableDictionary *)arg1 ;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithPath:(id)arg1 error:(id*)arg2 ;
-(void)setVariables:(NSDictionary *)arg1 ;
-(void)setLargerBetter:(BOOL)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithJSONData:(id)arg1 error:(id*)arg2 ;
-(void)setPerfdata:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)perfdata;
-(void)setTestDescription:(NSString *)arg1 ;
-(NSString *)testDescription;
-(void)setPrimaryMetricFilter:(NSString *)arg1 ;
-(NSString *)primaryMetricFilter;
-(BOOL)isComparableTo:(id)arg1 ;
-(BOOL)enumerateMeasurementsMatchingNullableFilter:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)enumerateAggregatedMeasurementsMatchingNullableFilter:(id)arg1 ignoringVariables:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)enumerateMeasurementsMatchingFilter:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)isLike:(id)arg1 ;
-(unsigned long long)measurementCount;
-(BOOL)enumerateMeasurementsWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)enumerateAggregatedMeasurementsMatchingFilter:(id)arg1 ignoringVariables:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)enumerateAggregatedMeasurementsIgnoringVariables:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)aggregateMeasurementsMatchingFilter:(id)arg1 error:(id*)arg2 ;
-(BOOL)largerBetter;
@end

