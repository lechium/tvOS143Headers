/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSNumber, NSDate;

@interface PLGlobalKeyValue : PLManagedObject

@property (nonatomic,retain) NSString * key; 
@property (assign,nonatomic) short type; 
@property (nonatomic,retain) id<NSSecureCoding> anyValue; 
@property (nonatomic,retain) NSNumber * boolValue; 
@property (nonatomic,retain) NSDate * dateValue; 
@property (nonatomic,retain) NSNumber * doubleValue; 
@property (nonatomic,retain) NSNumber * integerValue; 
@property (nonatomic,retain) NSString * stringValue; 
+(id)entityName;
+(id)globalValuesForKeys:(id)arg1 managedObjectContext:(id)arg2 ;
+(void)setGlobalValue:(id)arg1 forKey:(id)arg2 managedObjectContext:(id)arg3 ;
+(id)globalValueForKey:(id)arg1 managedObjectContext:(id)arg2 ;
+(id)dictionaryWithManagedObjectContext:(id)arg1 ;
+(void)populateWithDictionary:(id)arg1 managedObjectContext:(id)arg2 replaceExisting:(BOOL)arg3 ;
+(void)migrateLocaleIdentifierToGlobalKeyValues:(id)arg1 withPathManager:(id)arg2 ;
+(short)typeForKey:(id)arg1 ;
+(void)checkTypeForKey:(id)arg1 andValue:(id)arg2 ;
+(void)_setGlobalValue:(id)arg1 forKeyValue:(id)arg2 managedObjectContext:(id)arg3 ;
+(id)_globalValueForKeyValue:(id)arg1 ;
+(id)_fetchGlobalKeyValueForKey:(id)arg1 withManagedObjectContext:(id)arg2 createIfMissing:(BOOL)arg3 ;
+(id)_fetchGlobalKeyValuesForKeys:(id)arg1 withManagedObjectContext:(id)arg2 ;
-(BOOL)supportsCloudUpload;
@end
