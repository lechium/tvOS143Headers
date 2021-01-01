/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSFetchRequestResult.h>

@class NSManagedObjectContext, NSManagedObjectID, NSString, NSEntityDescription;

@interface NSManagedObject : NSObject <NSFetchRequestResult> {

	int _cd_rc;
	unsigned _cd_lockingInfo;
	unsigned _cd_stateFlags;
	unsigned _cd_extraFlags;
	id _cd_rawData;
	NSManagedObjectContext* _cd_managedObjectContext;
	NSManagedObjectID* _cd_objectID;
	SCD_Struct_NS13* _cd_extras;
	id _cd_queueReference;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) NSEntityDescription * entity; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isInserted,nonatomic,readonly) BOOL inserted; 
@property (getter=isUpdated,nonatomic,readonly) BOOL updated; 
@property (getter=isDeleted,nonatomic,readonly) BOOL deleted; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,readonly) BOOL hasPersistentChangedValues; 
@property (getter=isFault,nonatomic,readonly) BOOL fault; 
@property (nonatomic,readonly) unsigned long long faultingState; 
+(void)initialize;
+(id)retain;
+(void)release;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)resolveClassMethod:(SEL)arg1 ;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)entityName;
+(id)fetchRequest;
+(id)entity;
+(id)_retain_1;
+(void)_release_1;
+(id)allocWithEntity:(id)arg1 ;
+(void)_entityDeallocated;
+(BOOL)_isGeneratedClass;
+(Class)classForEntity:(id)arg1 ;
+(id)_PFPlaceHolderSingleton;
+(id)alloc_10_4;
+(id)allocWithZone_10_4:(NSZone*)arg1 ;
+(char*)_transientPropertiesChangesMask__;
+(id)_PFPlaceHolderSingleton_core;
+(BOOL)contextShouldIgnoreUnmodeledPropertyChanges;
+(BOOL)_useFastValidationMethod;
+(BOOL)_isGeneratedClass_1;
+(SCD_Struct_NS14*)_PFMOClassFactoryData;
+(unsigned)allocBatch:(id*)arg1 withEntity:(id)arg2 count:(unsigned)arg3 ;
+(void)_initializeAccessorStubs;
+(void)_initializePrimitiveAccessorStubs;
+(id)batchAllocateWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 count:(unsigned)arg3 ;
+(BOOL)_hasOverriddenAwake;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_obsoleteAttributes;
-(id)_removeObsoleteKeysFromDictionary:(id)arg1 ;
-(void)setValuesWithObject:(id)arg1 ;
-(BOOL)validateRequiredAttributesForObject:(id)arg1 error:(id*)arg2 ;
-(id)retain;
-(oneway void)release;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(BOOL)isFault;
-(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setObservationInfo:(void*)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setNilValueForKey:(id)arg1 ;
-(BOOL)validateValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)mutableArrayValueForKey:(id)arg1 ;
-(id)mutableOrderedSetValueForKey:(id)arg1 ;
-(id)mutableSetValueForKey:(id)arg1 ;
-(id)dictionaryWithValuesForKeys:(id)arg1 ;
-(void)setValuesForKeysWithDictionary:(id)arg1 ;
-(void)willChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(void)didChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3 ;
-(void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3 ;
-(void*)observationInfo;
-(id)_implicitObservationInfo;
-(BOOL)implementsSelector:(SEL)arg1 ;
-(BOOL)hasChanges;
-(NSManagedObjectID *)objectID;
-(id)initWithContext:(id)arg1 ;
-(NSEntityDescription *)entity;
-(NSManagedObjectContext *)managedObjectContext;
-(id)primitiveValueForKey:(id)arg1 ;
-(void)_setVersionReference__:(unsigned)arg1 ;
-(void)willAccessValueForKey:(id)arg1 ;
-(BOOL)isDeleted;
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
-(BOOL)isInserted;
-(void)willFireFault;
-(void)didFireFault;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(void)didTurnIntoFault;
-(void)_setGenericValue:(id)arg1 forKey:(id)arg2 withIndex:(long long)arg3 flags:(long long)arg4 ;
-(id)_genericValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3 ;
-(void)didAccessValueForKey:(id)arg1 ;
-(id)_genericMutableSetValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3 ;
-(id)_genericMutableOrderedSetValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3 ;
-(BOOL)isUpdated;
-(BOOL)hasFaultForRelationshipNamed:(id)arg1 ;
-(void)awakeFromInsert;
-(void)awakeFromSnapshotEvents:(unsigned long long)arg1 ;
-(void)prepareForDeletion;
-(void)willSave;
-(void)didSave;
-(BOOL)validateForDelete:(id*)arg1 ;
-(BOOL)validateForInsert:(id*)arg1 ;
-(BOOL)validateForUpdate:(id*)arg1 ;
-(void)setPrimitiveValue:(id)arg1 forKey:(id)arg2 ;
-(id)dictionaryWithPropertyValues;
-(id)committedValuesForKeys:(id)arg1 ;
-(id)changedValues;
-(unsigned long long)faultingState;
-(id)changedValuesForCurrentEvent;
-(BOOL)hasPersistentChangedValues;
-(id)objectIDsForRelationshipNamed:(id)arg1 ;
-(id)bindableObjectPublisher;
-(void)setBindableObjectPublisher:(id)arg1 ;
-(void)willRefresh:(BOOL)arg1 ;
-(void)didRefresh:(BOOL)arg1 ;
-(id)_initWithEntity:(id)arg1 withID:(id)arg2 withHandler:(id)arg3 withContext:(id)arg4 ;
-(unsigned)_versionReference__;
-(void)_didChangeValue:(id)arg1 forRelationship:(id)arg2 named:(id)arg3 withInverse:(id)arg4 ;
-(id)_orderKeysForRelationshipWithName__:(id)arg1 ;
-(BOOL)_updateLocationsOfObjectsToLocationByOrderKey:(id)arg1 inRelationshipWithName:(id)arg2 error:(id*)arg3 ;
-(BOOL)_defaultValidation:(id*)arg1 error:(id*)arg2 ;
@end

