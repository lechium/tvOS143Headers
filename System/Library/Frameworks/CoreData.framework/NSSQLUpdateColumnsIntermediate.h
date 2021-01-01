/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLIntermediate.h>

@class NSArray;

@interface NSSQLUpdateColumnsIntermediate : NSSQLIntermediate {

	NSArray* _propertiesToUpdate;
	NSArray* _valuesToUpdateTo;

}
-(void)dealloc;
-(BOOL)isDestination:(id)arg1 compatibleDestinationFor:(id)arg2 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)isRelationship:(id)arg1 compatibleWith:(id)arg2 ;
-(id)_subqueryIntermediateForToManyKeypathWithComponents:(id)arg1 withFunction:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForKeypathWithComponents:(id)arg1 onSQLEntity:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForRelationshipUpdate:(id)arg1 sourceRelationship:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForAttributeUpdate:(id)arg1 sourceAttribute:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLToUpdateProperty:(id)arg1 fromMultiStepKeypathComponents:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLToUpdateProperty:(id)arg1 fromSingleStepKeypath:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForRelationshipUpdate:(id)arg1 destination:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForAttributeUpdate:(id)arg1 value:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLToUpdateProperty:(id)arg1 fromKeypath:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLToUpdateProperty:(id)arg1 fromSubquery:(id)arg2 inContext:(id)arg3 ;
-(id)initWithProperties:(id)arg1 values:(id)arg2 inScope:(id)arg3 ;
-(BOOL)isUpdateColumnsScoped;
-(id)governingAliasForKeypathExpression:(id)arg1 ;
@end

