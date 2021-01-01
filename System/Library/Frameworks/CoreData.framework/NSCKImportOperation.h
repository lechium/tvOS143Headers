/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSUUID, NSData, NSSet;

@interface NSCKImportOperation : NSManagedObject

@property (nonatomic,retain) NSDate * importDate; 
@property (nonatomic,retain) NSUUID * operationUUID; 
@property (nonatomic,retain) NSData * changeTokenBytes; 
@property (nonatomic,retain) NSSet * pendingRelationships; 
+(id)entityPath;
+(id)fetchUnfinishedImportOperationsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchOperationWithIdentifier:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(BOOL)purgeFinishedImportOperationsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
@end
