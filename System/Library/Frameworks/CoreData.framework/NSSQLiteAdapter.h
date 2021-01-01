/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreData/CoreData-Structs.h>
@class NSSQLCore, NSSQLModel;

@interface NSSQLiteAdapter : NSObject {

	NSSQLCore* _sqlCore;
	NSSQLModel* _model;
	CFDictionaryRef _cachedDeleteTriggersByEntity;
	os_unfair_lock_s _lock;

}
+(id)generateSubselectForColumn:(id)arg1 givenObjects:(id)arg2 ;
+(id)generateStatementForCheckingUniqueProperties:(id)arg1 onObjects:(id)arg2 usingSQLCore:(id)arg3 ;
+(id)generateStatementForCheckingMulticolumnConstraint:(id)arg1 onObjects:(id)arg2 usingSQLCore:(id)arg3 ;
-(void)dealloc;
-(id)sqlCore;
-(void)_useModel:(id)arg1 ;
-(id)newSelectStatementWithFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 ;
-(id)generateDeleteStatementsForRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithSQLCore:(id)arg1 ;
-(id)newCreateTableStatementForEntity:(id)arg1 ;
-(id)newCreateTableStatementForManyToMany:(id)arg1 ;
-(id)newDropTableStatementForTableNamed:(id)arg1 ;
-(id)newStatementWithSQLString:(id)arg1 ;
-(unsigned char)sqlTypeForExpressionConstantValue:(id)arg1 ;
-(id)newRenameTableStatementFromManyToMany:(id)arg1 toManyToMany:(id)arg2 orToRandomSpot:(id)arg3 ;
-(id)newCopyAndInsertStatementForManyToMany:(id)arg1 toManyToMany:(id)arg2 intermediateTableName:(id)arg3 invertColumns:(BOOL)arg4 ;
-(id)newSimplePrimaryKeyUpdateStatementForEntity:(id)arg1 ;
-(id)newComplexPrimaryKeyUpdateStatementForEntity:(id)arg1 ;
-(id)generateSQLStatmentForSourcesAndOrderKeysForDestination:(id)arg1 inToMany:(id)arg2 ;
-(id)generateSQLStatmentForSourcesAndOrderKeysForDestination:(id)arg1 inManyToMany:(id)arg2 ;
-(id)newStatementWithEntity:(id)arg1 ;
-(id)newGeneratorWithStatement:(id)arg1 ;
-(id)_statementForFetchRequestContext:(id)arg1 ignoreInheritance:(BOOL)arg2 countOnly:(BOOL)arg3 nestingLevel:(unsigned)arg4 ;
-(id)newStatementWithoutEntity;
-(id)generateBatchDeleteUpdateHistoryStatementEntity:(id)arg1 andRelationship:(id)arg2 useInverse:(BOOL)arg3 ;
-(id)generateBatchDeleteUpdateHistoryStatementEntity:(id)arg1 andRelationship:(id)arg2 ;
-(id)typeStringForColumn:(id)arg1 ;
-(void)_generateFragmentsForEntity:(id)arg1 inArray:(id)arg2 ;
-(id)typeStringForSQLType:(unsigned char)arg1 ;
-(id)newCreateIndexStatementForColumnWithName:(id)arg1 inTableWithName:(id)arg2 ;
-(id)newDropIndexStatementForColumnWithName:(id)arg1 inTableWithName:(id)arg2 ;
-(id)newCreateIndexStatementForColumn:(id)arg1 ;
-(id)newCreateIndexStatementForCorrelationTable:(id)arg1 ;
-(id)newCreateIndexStatementForOrderedRelationship:(id)arg1 ;
-(id)generateBinaryIndexStatementsForIndex:(id)arg1 onEntity:(id)arg2 ;
-(id)generateRTreeIndexStatementsForIndex:(id)arg1 onEntity:(id)arg2 ;
-(id)newCreateIndexStatementsForEntity:(id)arg1 defaultIndicesOnly:(BOOL)arg2 ;
-(id)newDropIndexStatementForColumn:(id)arg1 ;
-(id)newDropIndexStatementForCorrelationTable:(id)arg1 ;
-(id)generateDropBinaryIndexStatementsForIndex:(id)arg1 onEntity:(id)arg2 ;
-(id)generateDropRTreeIndexStatementsForIndex:(id)arg1 onEntity:(id)arg2 ;
-(id)newDropIndexStatementsForEntity:(id)arg1 defaultIndicesOnly:(BOOL)arg2 ;
-(id)createSQLStatementsForTriggerAttribute:(id)arg1 withSQLEntity:(id)arg2 ;
-(id)createSQLStatementsForRTreeTriggersForLocationAttribute:(id)arg1 withSQLEntity:(id)arg2 existingRtreeTables:(id)arg3 ;
-(BOOL)generateCorrelationTableTriggerStatementsForRelationship:(id)arg1 existing:(CFDictionaryRef)arg2 correlationTableTriggers:(CFDictionaryRef)arg3 error:(id*)arg4 ;
-(BOOL)generateTriggerForEntity:(id)arg1 alreadyCreated:(CFDictionaryRef)arg2 correlations:(CFDictionaryRef)arg3 batchHistory:(CFDictionaryRef)arg4 fragments:(id)arg5 error:(id*)arg6 ;
-(BOOL)generateBatchDeleteUpdateHistoryTriggerForEntity:(id)arg1 andRelationship:(id)arg2 batchHistory:(CFDictionaryRef)arg3 error:(id*)arg4 ;
-(id)createCleanupSQLForRelationship:(id)arg1 existing:(CFDictionaryRef)arg2 correlationTableTriggers:(CFDictionaryRef)arg3 batchHistory:(CFDictionaryRef)arg4 error:(id*)arg5 ;
-(id)generateTriggerStatementsForEntity:(id)arg1 usingRelationshipCleanupSQL:(id)arg2 error:(id*)arg3 ;
-(id)generateDeleteHistoryTriggerForEntity:(id)arg1 error:(id*)arg2 ;
-(id)_cachedTriggersForEntity:(id)arg1 ;
-(id)_generateExternalDataRefStatementsForEntities:(id)arg1 inRequestContext:(id)arg2 ;
-(void)_cacheTriggers:(id)arg1 forEntity:(id)arg2 ;
-(id)sqliteVersion;
-(id)newInsertStatementWithRow:(id)arg1 ;
-(id)newUpdateStatementWithRow:(id)arg1 originalRow:(id)arg2 withMask:(CFBitVectorRef)arg3 ;
-(id)newConstrainedValuesUpdateStatementWithRow:(id)arg1 ;
-(id)newDeleteStatementWithRow:(id)arg1 ;
-(id)newSelectStatementWithFetchRequestContext:(id)arg1 ignoreInheritance:(BOOL)arg2 ;
-(id)newCountStatementWithFetchRequestContext:(id)arg1 ;
-(id)newCorrelationInsertStatementForRelationship:(id)arg1 ;
-(id)newCorrelationDeleteStatementForRelationship:(id)arg1 ;
-(id)newCorrelationMasterReorderStatementForRelationship:(id)arg1 ;
-(id)newCorrelationMasterReorderStatementPart2ForRelationship:(id)arg1 ;
-(id)newCorrelationReorderStatementForRelationship:(id)arg1 ;
-(id)newCreateTempTableStatementForEntity:(id)arg1 withAttributesToConstrain:(id)arg2 ;
-(id)newCreatePrimaryKeyTableStatement;
-(id)newPrimaryKeyInitializeStatementForEntity:(id)arg1 withInitialMaxPK:(long long)arg2 ;
-(id)newDropTableStatementOrFailForTableNamed:(id)arg1 ;
-(id)newRenameTableStatementFrom:(id)arg1 to:(id)arg2 ;
-(id)newCreateIndexStatementForColumns:(id)arg1 name:(id)arg2 ;
-(id)newCreateIndexStatementsForEntity:(id)arg1 ;
-(id)newDropIndexStatementsForEntity:(id)arg1 ;
-(id)newCreateTriggersForEntity:(id)arg1 existingRtreeTables:(id)arg2 ;
@end

