/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface _PSContactFillerDataCollectionStatistics : NSObject {

	NSMutableArray* _list;
	double _min;
	double _max;
	double _avg;
	double _stdev;

}

@property (nonatomic,retain) NSMutableArray * list;              //@synthesize list=_list - In the implementation block
@property (assign) double min;                                   //@synthesize min=_min - In the implementation block
@property (assign) double max;                                   //@synthesize max=_max - In the implementation block
@property (assign) double avg;                                   //@synthesize avg=_avg - In the implementation block
@property (assign) double stdev;                                 //@synthesize stdev=_stdev - In the implementation block
-(void)setMax:(double)arg1 ;
-(double)max;
-(NSMutableArray *)list;
-(double)min;
-(void)addValue:(id)arg1 ;
-(void)setMin:(double)arg1 ;
-(double)avg;
-(void)setAvg:(double)arg1 ;
-(void)setList:(NSMutableArray *)arg1 ;
-(void)calculateStats;
-(void)setStdev:(double)arg1 ;
-(double)stdev;
-(id)initWithList:(id)arg1 ;
@end

