/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreData/CoreData-Structs.h>
@class NSManagedObjectModel, NSDictionary, NSMappingModel, NSManagedObjectContext, NSMigrationContext, NSError, NSString, NSEntityMapping;

@interface NSMigrationManager : NSObject {

	NSManagedObjectModel* _sourceModel;
	NSDictionary* _sourceEntitiesByVersionHash;
	NSManagedObjectModel* _destinationModel;
	NSDictionary* _destinationEntitiesByVersionHash;
	NSMappingModel* _mappingModel;
	NSManagedObjectContext* _sourceManagedObjectContext;
	NSManagedObjectContext* _destinationManagedObjectContext;
	NSMigrationContext* _migrationContext;
	NSDictionary* _userInfo;
	struct {
		unsigned _migrationWasCancelled : 1;
		unsigned _usesStoreSpecificMigrationManager : 1;
		unsigned _migrationWasInPlace : 1;
		unsigned _reservedMigrationManager : 29;
	}  _migrationManagerFlags;
	NSError* _migrationCancellationError;
	id _reserved1;
	id _reserved2;
	id _reserved3;
	id _reserved4;
	NSString* _destinationConfigurationForCloudKitValidation;

}

@property (nonatomic,retain) NSString * destinationConfigurationForCloudKitValidation; 
@property (nonatomic,retain) NSString * destinationConfigurationForCloudKitValidation;              //@synthesize destinationConfigurationForCloudKitValidation=_destinationConfigurationForCloudKitValidation - In the implementation block
@property (assign) BOOL usesStoreSpecificMigrationManager; 
@property (readonly) NSMappingModel * mappingModel; 
@property (readonly) NSManagedObjectModel * sourceModel; 
@property (readonly) NSManagedObjectModel * destinationModel; 
@property (readonly) NSManagedObjectContext * sourceContext; 
@property (readonly) NSManagedObjectContext * destinationContext; 
@property (readonly) NSEntityMapping * currentEntityMapping; 
@property (readonly) float migrationProgress; 
@property (nonatomic,retain) NSDictionary * userInfo; 
+(int)migrationDebugLevel;
+(void)setMigrationDebugLevel:(int)arg1 ;
+(BOOL)_canMigrateWithMappingModel:(id)arg1 ;
+(BOOL)_performSanityCheckForMapping:(id)arg1 fromSourceModel:(id)arg2 toDestinationModel:(id)arg3 ;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)reset;
-(id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2 ;
-(NSManagedObjectContext *)destinationContext;
-(id)_migrationContext;
-(void)associateSourceInstance:(id)arg1 withDestinationInstance:(id)arg2 forEntityMapping:(id)arg3 ;
-(id)sourceInstancesForEntityMappingNamed:(id)arg1 destinationInstances:(id)arg2 ;
-(id)destinationEntityForEntityMapping:(id)arg1 ;
-(NSEntityMapping *)currentEntityMapping;
-(id)currentPropertyMapping;
-(NSString *)destinationConfigurationForCloudKitValidation;
-(void)setDestinationConfigurationForCloudKitValidation:(NSString *)arg1 ;
-(void)_doCleanupOnFailure:(id)arg1 ;
-(BOOL)usesStoreSpecificMigrationManager;
-(NSManagedObjectModel *)sourceModel;
-(NSManagedObjectModel *)destinationModel;
-(BOOL)migrateStoreFromURL:(id)arg1 type:(id)arg2 options:(id)arg3 withMappingModel:(id)arg4 toDestinationURL:(id)arg5 destinationType:(id)arg6 destinationOptions:(id)arg7 error:(id*)arg8 ;
-(BOOL)_migrateStoreFromURL:(id)arg1 type:(id)arg2 options:(id)arg3 withMappingModel:(id)arg4 toDestinationURL:(id)arg5 destinationType:(id)arg6 destinationOptions:(id)arg7 error:(id*)arg8 ;
-(id)_mappingNamed:(id)arg1 ;
-(id)sourceEntityForEntityMapping:(id)arg1 ;
-(NSMappingModel *)mappingModel;
-(NSManagedObjectContext *)sourceContext;
-(id)destinationInstancesForEntityMappingNamed:(id)arg1 sourceInstances:(id)arg2 ;
-(id)destinationInstancesForSourceRelationshipNamed:(id)arg1 sourceInstances:(id)arg2 ;
-(float)migrationProgress;
-(void)cancelMigrationWithError:(id)arg1 ;
-(void)setUsesStoreSpecificMigrationManager:(BOOL)arg1 ;
-(id)fetchRequestForSourceEntityNamed:(id)arg1 predicateString:(id)arg2 includesSubentities:(BOOL)arg3 ;
-(id)_evaluateSourceExpressionForMapping:(id)arg1 entityPolicy:(id)arg2 ;
-(BOOL)_doFirstPassForMapping:(id)arg1 error:(id*)arg2 ;
-(BOOL)_doSecondPassForMapping:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateAllObjectsAfterMigration:(id*)arg1 ;
-(BOOL)_doThirdPassForMapping:(id)arg1 error:(id*)arg2 ;
-(BOOL)_performedInPlaceMigration;
-(void)_setPerformedInPlaceMigration:(BOOL)arg1 ;
-(id)fetchRequestForSourceEntityNamed:(id)arg1 predicateString:(id)arg2 ;
@end
