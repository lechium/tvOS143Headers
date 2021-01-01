/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DASearchQueryConsumer;
#import <DataAccessExpress/DataAccessExpress-Structs.h>
@class NSString, NSPredicate;

@interface DASearchQuery : NSObject {

	int _timeLimit;
	NSString* _searchString;
	NSPredicate* _searchPredicate;
	id<DASearchQueryConsumer> _consumer;
	NSString* _searchID;
	unsigned long long _state;
	NSRange _range;

}

@property (nonatomic,copy) NSString * searchString;                                  //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,copy) NSPredicate * searchPredicate;                            //@synthesize searchPredicate=_searchPredicate - In the implementation block
@property (nonatomic,copy) NSString * searchID;                                      //@synthesize searchID=_searchID - In the implementation block
@property (assign,nonatomic) unsigned long long state;                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) NSRange range;                                          //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned maxResults; 
@property (assign,nonatomic) int timeLimit;                                          //@synthesize timeLimit=_timeLimit - In the implementation block
@property (assign,nonatomic,__weak) id<DASearchQueryConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
+(id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2 ;
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(NSRange)range;
-(void)setConsumer:(id<DASearchQueryConsumer>)arg1 ;
-(id<DASearchQueryConsumer>)consumer;
-(void)setMaxResults:(unsigned)arg1 ;
-(unsigned)maxResults;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(void)sendFinishedToConsumerWithError:(id)arg1 ;
-(void)sendResultsToConsumer:(id)arg1 ;
-(void)setSearchID:(NSString *)arg1 ;
-(NSString *)searchID;
-(id)initWithSearchString:(id)arg1 consumer:(id)arg2 ;
-(void)setTimeLimit:(int)arg1 ;
-(void)setSearchPredicate:(NSPredicate *)arg1 ;
-(int)timeLimit;
-(id)initWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3 ;
-(id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2 ;
-(BOOL)isQueryRunning;
-(NSPredicate *)searchPredicate;
@end

