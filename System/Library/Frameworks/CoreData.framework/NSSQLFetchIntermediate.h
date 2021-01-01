/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLStatementIntermediate.h>

@class NSSQLSelectIntermediate, NSSQLGroupByIntermediate, NSSQLHavingIntermediate, NSSQLOffsetIntermediate, NSMutableArray, NSMutableDictionary;

@interface NSSQLFetchIntermediate : NSSQLStatementIntermediate {

	NSSQLSelectIntermediate* _selectClause;
	NSSQLGroupByIntermediate* _groupByClause;
	NSSQLHavingIntermediate* _havingClause;
	NSSQLOffsetIntermediate* _offsetClause;
	NSMutableArray* _groupByKeypaths;
	BOOL _isDictionaryCountFetch;
	NSMutableArray* _joinIntermediates;
	NSMutableDictionary* _joinKeypaths;

}
-(void)dealloc;
-(id)initWithScope:(id)arg1 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)selectIntermediate;
-(BOOL)isFunctionScoped;
-(id)_generateJoinSQLStringInContext:(id)arg1 ;
-(id)fetchIntermediateForKeypathExpression:(id)arg1 ;
-(id)fetchIntermediate;
-(BOOL)isDictionaryCountFetch;
-(void)setDictionaryCountFetch:(BOOL)arg1 ;
-(void)setSelectIntermediate:(id)arg1 ;
-(id)groupByIntermediate;
-(void)setGroupByIntermediate:(id)arg1 ;
-(void)addGroupByKeypath:(id)arg1 ;
-(BOOL)groupByClauseContainsKeypath:(id)arg1 ;
-(id)havingIntermediate;
-(void)setHavingIntermediate:(id)arg1 ;
-(void)setOffsetIntermediate:(id)arg1 ;
-(void)addJoinIntermediate:(id)arg1 atKeypathWithComponents:(id)arg2 ;
-(id)finalJoinForKeypathWithComponents:(id)arg1 ;
-(void)promoteToOuterJoinsAlongKeypathWithComponents:(id)arg1 ;
-(void)promoteToOuterJoinAtKeypathWithComponents:(id)arg1 ;
-(id)joinIntermediates;
-(void)selectDistinct;
@end

