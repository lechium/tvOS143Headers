/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:22:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/perfdata.framework/perfdata
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PDBucket : NSObject {

	BOOL _hasInclusiveUpperBound;
	double _lowerInclusiveBound;
	double _upperBound;
	unsigned long long _count;
	NSString* _label;

}

@property (assign,nonatomic) double lowerInclusiveBound; 
@property (assign,nonatomic) double upperBound; 
@property (assign,nonatomic) BOOL hasInclusiveUpperBound; 
@property (assign,nonatomic) unsigned long long count; 
@property (nonatomic,retain) NSString * label; 
@property (assign,nonatomic) double lowerInclusiveBound;               //@synthesize lowerInclusiveBound=_lowerInclusiveBound - In the implementation block
@property (assign,nonatomic) double upperBound;                        //@synthesize upperBound=_upperBound - In the implementation block
@property (assign,nonatomic) BOOL hasInclusiveUpperBound;              //@synthesize hasInclusiveUpperBound=_hasInclusiveUpperBound - In the implementation block
@property (assign,nonatomic) unsigned long long count;                 //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSString * label;                         //@synthesize label=_label - In the implementation block
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setUpperBound:(double)arg1 ;
-(double)upperBound;
-(void)setLowerInclusiveBound:(double)arg1 ;
-(double)lowerInclusiveBound;
-(void)setHasInclusiveUpperBound:(BOOL)arg1 ;
-(BOOL)hasInclusiveUpperBound;
@end

